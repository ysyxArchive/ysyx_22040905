#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include</home/agustin/ysyx-workbench/npc/build/obj_dir/VPassthrough.h>
#include<verilated_vcd_c.h>
#include<nvboard.h>
//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;

static TOP_NAME dut;
void nvboard_bind_all_pins(VPassthrough* top);

static void step_and_dump_wave(){
  //dut.clock=0;
  dut.eval();
  //dut.clock=1;
  dut.eval();
  //contextp->timeInc(1);
  //tfp->dump(contextp->time());
}
/*
void sim_init(){
  //contextp = new VerilatedContext;
  //tfp = new VerilatedVcdC;
  top = new VPassthrough;
  //contextp->traceEverOn(true);
  //top->trace(tfp, 0);
  //tfp->open("wave.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}*/

int main()
{
    //sim_init();
    nvboard_bind_all_pins(&dut);
    nvboard_init();
    while(1){
      step_and_dump_wave();
      nvboard_update();
    }
    //sim_exit();
    nvboard_quit();
}
