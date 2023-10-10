#include <dlfcn.h>
#include <assert.h>
#include "all.h"
#include <stddef.h>
#include <stdio.h>
void (*ref_difftest_memcpy)(uint32_t addr, void *buf, uint64_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut,uint64_t *pc, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

static int is_skip_ref = 0;

const char *cpu_name[32]={
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);
  //printf("%s\n\n",ref_so_file);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY );
  if(handle==NULL){
    printf("%s\n",dlerror());
    assert(0);
  }
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t, void*, uint64_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*,uint64_t*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  ref_difftest_memcpy(0x80000000,get_pmem(),get_pmem_size(),DIFFTEST_TO_REF);
  ref_difftest_regcpy(cpu_gpr,&pc, DIFFTEST_TO_REF);
}
bool isa_difftest_checkregs(uint64_t *ref_reg,uint64_t ref_pc,uint64_t pc,uint64_t pcc) {
  int flag=1;
  if(ref_pc!=pcc){
    flag=0;
    printf("ref_pc=%08lx\tdut_pc=%08lx\n",ref_pc,pcc);
  }
  for(int i=0;i<32;i++)
  {
    if(cpu_gpr[i]!=ref_reg[i]){
      flag=0;
      printf("%s is different after executing instruction at pc = 0x%08lx, right = 0x%016lx, wrong = 0x%016lx, diff = 0x%016lx\n",cpu_name[i], pc, ref_reg[i], cpu_gpr[i], ref_reg[i] ^ cpu_gpr[i]);
    }
  }
  if(flag) return true;
  return false;
}
void checkregs(uint64_t *ref_reg,uint64_t ref_pc, uint64_t pc,uint64_t pcc) {
  if (!isa_difftest_checkregs(ref_reg, ref_pc,pc,pcc)) {
    state=NPC_ABORT;
  }
}
uint64_t ref_reg[38];
uint64_t dut_reg[38];
uint64_t ref_pc;
void difftest_step(uint64_t pc,uint64_t pcc) {
  for(int i=0;i<32;i++){
    dut_reg[i]=cpu_gpr[i];
  }
  for(int i=0;i<6;i++){
    dut_reg[i+32]=cpu_csr[i];
  }
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(dut_reg,&pcc, DIFFTEST_TO_REF);
    is_skip_ref --;
    return;
  }
  ref_difftest_exec(1);
  ref_difftest_regcpy(ref_reg,&ref_pc, DIFFTEST_TO_DUT);
  checkregs(ref_reg,ref_pc,pc, pcc);
}

void difftest_skip_ref() {
  is_skip_ref = 2;
}