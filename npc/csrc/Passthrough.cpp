#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include</home/agustin/ysyx-workbench/npc/build/obj_dir/VPassthrough.h>
#include<verilated_vcd_c.h>
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

    for(int t=0;t<20;t++){
    top->io_x0=0,top->io_x1=1,top->io_x2=2,top->io_x3=3;
    top->io_y=rand()%4;

    step_and_dump_wave();
    printf("F = %d\n",top->io_F);
    assert(top->io_F == top->io_y);
    }
    sim_exit();
}
