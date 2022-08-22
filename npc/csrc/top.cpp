#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include"../build/obj_dir/Vtop.h"
#include<verilated_vcd_c.h>
#include<svdpi.h>
#include"../build/obj_dir/Vtop__Dpi.h"

//#include<nvboard.h>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
typedef unsigned long long ull;
Vtop* top = NULL;
//void nvboard_bind_all_pins(Vtop* top);
u_int32_t n=-1;
void cpp_break()
{
  printf("run_break\n");
  n=0;
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

u_int32_t pmem[32768];
u_int32_t pmem_read(ull pc){
  return pmem[(pc-0x80000000)/4];
}
void pmem_init(char *s){ 
  FILE *fp;
  fp=fopen(s,"r");
  assert(fp!=NULL);
  fseek(fp, 0, SEEK_END);
  int size = ftell(fp);
  size=size/4;
  fseek(fp,0,SEEK_SET);
  int ret=fread(pmem,4,size,fp);
  assert(ret!=0);
  fclose(fp);
  for(int i=0;i<size;i++){
    printf("%08x\n",pmem[i]);
  }
}
int main(int argc, char *argv[])
{

    sim_init();
    //nvboard_bind_all_pins(&dut);
    //nvboard_init();
    pmem_init(argv[1]);

    top->reset=1;
    step_and_dump_wave();
    top->reset=0;
    while(n--)
    {
      ull p=top->io_result;
      int op=0;
      while(p%2==0&&p!=0){
        p>>=1;
        op++;
      }
      printf("%08lx: %08x\n",top->io_pc,pmem_read(top->io_pc));
      top->io_inst = pmem_read(top->io_pc);
      step_and_dump_wave();
      //nvboard_update();
    }
    sim_exit();
    //nvboard_quit();
}
