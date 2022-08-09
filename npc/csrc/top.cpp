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
int n=8;
void cpp_break()
{
  printf("run!!!\n");
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

ull pmem[32768];
ull pmem_read(ull pc){
  return pmem[pc-0x80000000];
}
void pmem_init(){
  pmem[0] =0b00000000000100000000000010010011;
  pmem[4] =0b00000000001000001000000100010011;
  pmem[8] =0b00000000001100010000000110010011;
  pmem[12]=0b00000000010000011000001000010011;
  pmem[16]=0b00000000010100100000001010010011;
  pmem[20]=0b00000000000100000000000001110011;//ebreak
  pmem[24]=0b00000000011000101000001100010011;
  pmem[28]=0b00000000011100110000001110010011;
  pmem[32]=0b00000000100000111000010000010011;
}
int main()
{
    sim_init();
    //nvboard_bind_all_pins(&dut);
    //nvboard_init();
    pmem_init();

    top->reset=1;
    step_and_dump_wave();
    top->reset=0;
    while(n--)
    {
      top->io_inst = pmem_read(top->io_pc);
      step_and_dump_wave();
      //nvboard_update();
    }
    sim_exit();
    //nvboard_quit();
}
