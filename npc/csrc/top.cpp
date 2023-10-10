#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include "../build/obj_dir/Vtop.h"
#include <verilated_vcd_c.h>
#include <svdpi.h>
#include "../build/obj_dir/Vtop__Dpi.h"
#include <verilated_dpi.h>
#include "all.h"
#include <time.h>
// #include<nvboard.h>

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;
typedef unsigned long long ull;
Vtop *top = NULL;
// void nvboard_bind_all_pins(Vtop* top);
int state = NPC_QUIT;
uint64_t pc = 0;
int gdb = 0;

double inst_cnt = 0;
void dump_ftrace();
void dump_csr();
void cpp_break()
{
  state = NPC_QUIT; // break;
}
void sim_init()
{
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
#ifdef HAS_WAVE
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
#endif
}

static void step_and_dump_wave()
{
  inst_cnt++;

  top->clock = 0;
  top->eval();
#ifdef HAS_WAVE
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif

  top->clock = 1;
  top->eval();
#ifdef HAS_WAVE
  contextp->timeInc(1);
  tfp->dump(contextp->time());
#endif
}

void sim_exit()
{
  // step_and_dump_wave();
  tfp->close();
}

void reset()
{
  top->reset = 1;
  step_and_dump_wave();
  top->reset = 0;
  pc = top->io_pc;
  // step_and_dump_wave();
}
uint64_t skip=0;
int t=0;
uint64_t pre_pc=0; 
void exec_once()
{
  pre_pc=pc;
  pc = top->io_pc;
#ifdef HAS_TRACE
  dump_itrace();
  if (gdb)
    print_itrace();
#endif
  step_and_dump_wave();
  device_update();

#ifdef HAS_DIFFTEST
  if(top->io_timer_diff_skip){
    difftest_skip_ref();
  }
  if(t){
    difftest_step(pre_pc, pc);
    t=0;
  }
  if(top->io_valid){
    t=1;
  }
#endif

#ifdef HAS_TRACE
  dump_ftrace();
#endif
  // nvboard_update();
}
void execute(uint64_t n)
{
  while (n--)
  {
    if (state != NPC_RUNNING)
      return;
    exec_once();
  }
}

void exec()
{
  // printf("\n\n\n\n");
  execute(-1);
}
void init(int argc, char *argv[])
{
  state = NPC_RUNNING;
  sim_init();
  // nvboard_bind_all_pins(&dut);
  // nvboard_init();
  pmem_init(argv[1]);
  init_sdb();
  init_disasm("riscv64-pc-linux-gnu");
  load_elf(argv[4]);
  //init_wp_pool();
  top->io_mul_sel = 1;
  reset();
  init_difftest(argv[6], 4096,DIFFTEST_TO_REF);
  init_device();
}
//print gpr
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s = 0x%lx\n",cpu_name[i], cpu_gpr[i]);
  }
}
//print csr
uint64_t *cpu_csr = NULL;
extern "C" void set_csr_ptr(const svOpenArrayHandle r) {
  cpu_csr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
const char *csr_name[6]={
  "mstatus",
  "mtvec",
  "mepc",
  "mcause",
  "mie",
  "mip"
};

void dump_csr() {
  int i;
  for (i = 0; i < 6; i++) {
    printf("%s = 0x%lx\n",csr_name[i], cpu_csr[i]);
  }
}
//itrace
uint64_t *cpu_itrace = NULL;
extern "C" void set_itrace_ptr(const svOpenArrayHandle r) {
  cpu_itrace = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());//pc->dncp inst valid
}
char p[99];
void dump_itrace() {
  disassemble(p,99,cpu_itrace[0], (uint8_t *)&(cpu_itrace[1]), 4);
  FILE *fp;
  fp=fopen("build/itrace.txt","a");
  if(cpu_itrace[2]==1) fprintf(fp,"0x%08lx:\t%08lx\t%s\n",cpu_itrace[0],cpu_itrace[1],p);
  fclose(fp);
}
void print_itrace(){
  if(cpu_itrace[2])printf("0x%08lx:\t%08lx\t%s\n",cpu_itrace[0],cpu_itrace[1],p);
}
void dump_ftrace(){
  if(!cpu_itrace[2])return;
  if(BITS(cpu_itrace[1],6,0)==0b1101111){
    ftrace_add(pc,cpu_itrace[0],1);
  }
  if(BITS(cpu_itrace[1],6,0)==0b1100111&&BITS(cpu_itrace[1],14,12)==0){
    if(BITS(cpu_itrace[1],11,7)==0&&BITS(cpu_itrace[1],19,15)==1&&BITS(cpu_itrace[1], 31, 20)==0)ftrace_add(pc,cpu_itrace[0],0);
    else ftrace_add(pc,cpu_itrace[0],1);
  }
}
int main(int argc, char *argv[])
{
  //for(int i=0;i<argc;i++){printf("%s\n",argv[i]);}
  init(argc,argv);

  //开始计时
  clock_t start,finish;
  double totaltime;
  start=clock(); 

  if(strcmp(argv[2],"-g")==0) {gdb=1;sdb_mainloop();}
  else exec();

  if(state==NPC_QUIT&&cpu_gpr[10]==0){
    printf("npc: \033[1;32mHIT GOOD TRAP\033[0m at pc = 0x%016lx\n",pc);
  }
  else {
    printf("npc: \033[1;31mHIT BAD TRAP\033[0m at pc = 0x%016lx\n",pc);
    return -1;
  }

  //结束计时
  finish=clock();
  totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
  printf("\033[1;32mtotal time: %f s\nThe number of clock cycles that run in one second is %f\n\033[0m",totaltime,inst_cnt/totaltime);
  //printf("hit: ICache:%f DCache:%f ",(double)BITS(top->io_hitrate_i,31,0)/BITS(top->io_hitrate_i,63,32),(double)BITS(top->io_hitrate_d,31,0)/BITS(top->io_hitrate_d,63,32));
  //printf("in cycle:%lld\n",BITS(top->io_hitrate_i,63,32)+BITS(top->io_hitrate_d,63,32));
  sim_exit();
  //nvboard_quit();
}
