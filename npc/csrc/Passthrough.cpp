#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include</home/agustin/ysyx-workbench/npc/build/obj_dir/VPassthrough.h>
#include<verilated_vcd_c.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time=0;
int main(int argc,char ** argv, char** env)
{
    VPassthrough* top =new VPassthrough;
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp=new VerilatedVcdC;

    top->trace(tfp,5);
    tfp->open("wave.vcd");


    while(sim_time<MAX_SIM_TIME){
    top->io_x0=0,top->io_x1=1,top->io_x2=10,top->io_x3=11;
    top->io_y=rand()%4;

    top->eval();
    tfp->dump(sim_time);
    printf("F = %d\n",top->io_F);
    //assert(top->io_F == top->io_y);
    sim_time++;
    }
    tfp->close();
    delete top;
    return 0;

}
