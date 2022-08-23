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

//#include<nvboard.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
typedef unsigned long long ull;
Vtop* top = NULL;
//void nvboard_bind_all_pins(Vtop* top);
int state=0;
void cpp_break()
{
  state=1;//break;
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 99);
  tfp->open("wave.vcd");
}

static void step_and_dump_wave(){
  top->clock=0;
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());

  top->clock=1;
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void reset()
{
  top->reset=1;
  step_and_dump_wave();
  top->reset=0;
}
void dump_itace();
void exec_once(){
  top->io_inst = pmem_inst_read(top->io_pc);
  step_and_dump_wave();
  dump_itace();
//nvboard_update();
}
void execute(u_int64_t n){
  while(n--) {
    exec_once();
    if(state!=0)return;

  }
}

void exec(){
  //printf("\n\n\n\n");
  execute(-1);
}
void init(char *argv[]){
  sim_init();
  //nvboard_bind_all_pins(&dut);
  //nvboard_init();
  pmem_init(argv[1]);
  init_sdb();
  init_disasm("riscv64" "-pc-linux-gnu");
  reset();
}
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}
uint64_t *cpu_itrace = NULL;
extern "C" void set_itrace_ptr(const svOpenArrayHandle r) {
  cpu_itrace = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
void dump_itace() {
    printf("0x%08lx:\t%08lx\t\n",cpu_itrace[0],cpu_itrace[1]);
}
int main(int argc, char *argv[])
{
  return 0;
  //for(int i=0;i<argc;i++){printf("%s\n",argv[i]);}
  init(argv); 
  if(argc>2&&strcmp(argv[2],"-g")==0) sdb_mainloop();
  else exec();

  if(state==1)printf("npc: \033[1;32mHIT GOOD TRAP\033[0m at pc = 0x%016lx\n",top->io_pc);
  else printf("npc: \033[1;31mHIT BAD TRAP\033[0m at pc = 0x%016lx\n",top->io_pc);
  sim_exit();
  //nvboard_quit();
}
