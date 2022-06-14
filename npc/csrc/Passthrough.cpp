#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include</home/agustin/ysyx-workbench/npc/build/obj_dir/VPassthrough.h>
#include<verilated_vcd_c.h>
#include<nvboard.h>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static VPassthrough* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VPassthrough;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("wave.vcd");
}
void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main()
{
    sim_init();
    nvboard_bind_all_pins(&top);
    nvboard_init();
    top.en=1;
    while(1){
      top->clock = 0; 
      step_and_dump_wave();
      top->clock=1;
      step_and_dump_wave();
      nvboard_update();
    }
    sim_exit();
    nvboard_quit();
}
