#include <dlfcn.h>

#include <isa.h>
#include <cpu/cpu.h>
#include <memory/paddr.h>
#include <utils.h>
#include <difftest-def.h>

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

static int is_difftest_mode = true;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() {
  if(!is_difftest_mode)return ;
  is_skip_ref = true;
  // If such an instruction is one of the instruction packing in QEMU
  // (see below), we end the process of catching up with QEMU's pc to
  // keep the consistent behavior in our best.
  // Note that this is still not perfect: if the packed instructions
  // already write some memory, and the incoming instruction in NEMU
  // will load that memory, we will encounter false negative. But such
  // situation is infrequent.
  skip_dut_nr_inst = 0;
}

// this is used to deal with instruction packing in QEMU.
// Sometimes letting QEMU step once will execute multiple instructions.
// We should skip checking until NEMU's pc catches up with QEMU's pc.
// The semantic is
//   Let REF run `nr_ref` instructions first.
//   We expect that DUT will catch up with REF within `nr_dut` instructions.
void difftest_skip_dut(int nr_ref, int nr_dut) {
  if(!is_difftest_mode)return ;
  skip_dut_nr_inst += nr_dut;

  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}
long img_size_2;
void init_difftest(char *ref_so_file, long img_size, int port) {
  img_size_2=img_size;
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY | MUXNDEF(CONFIG_CC_ASAN, RTLD_DEEPBIND, 0));
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ASNI_FMT("ON", ASNI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    nemu_state.state = NEMU_ABORT;
    nemu_state.halt_pc = pc;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  if(!is_difftest_mode)return ;
  CPU_state ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  is_difftest_mode = true;}

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

  checkregs(&ref_r, pc);
}
void difftest_detach(){
  is_difftest_mode = false;
}
void difftest_attach(){
  is_difftest_mode = true;
  uint32_t *buff=malloc(32*4);
  int len=0;
  //copy instruction
  isa_difftest_attach(buff,&len);
  ref_difftest_memcpy(0x87000000,buff,len,DIFFTEST_TO_REF);
  //enter
  CPU_state cpuu;
  cpuu.pc=0x87000000;
  ref_difftest_regcpy(&cpuu,DIFFTEST_TO_REF);
  //execute
  ref_difftest_exec(len/4);
  for(int i=0;i<len;i++){
    printf("%02x",*(((uint8_t *)buff)+i));
    if((i+1)%4==0)printf("\n");
  }
  //change gpr
  ref_difftest_memcpy(RESET_VECTOR+0x100000, guest_to_host(RESET_VECTOR+0x100000), img_size_2-0x100000, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);

  free(buff);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif

#ifdef CONFIG_ITRACE
#ifndef ir_max
#define ir_max 10
#endif

static char iringbuf[ir_max][2048];
static int ir_head;
static int ir_tail;
static int ir_full;

void init_iringbuf(){
  for(int i=0;i<ir_max;i++){
    strcpy(iringbuf[i],"");
  }
  ir_head=0;
  ir_tail=0;
  ir_full=0;
}
void iringbuf_add(char* s){
  if(ir_full)ir_head=(ir_head+1)%ir_max;
  strcpy(iringbuf[ir_tail],s);
  ir_tail=(ir_tail+1)%ir_max;
  if(ir_tail==0)ir_full=1;
}
void iringbuf_print(){
  if(ir_tail>ir_head){
    for(int i=ir_head;i<ir_tail;i++){
      printf("%s\n",iringbuf[i]);
      }
    }
  else if(ir_full){
    for(int i=ir_head;i<ir_max;i++)
      printf("%s\n",iringbuf[i]);
    for(int i=0;i<ir_tail;i++)
      printf("%s\n",iringbuf[i]);
  }
  printf("\n");
}
#else
void init_iringbuf(){}
void iringbuf_add(char* s){}
void iringbuf_print(){}
#endif