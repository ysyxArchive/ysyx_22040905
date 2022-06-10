#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include<VPassthrough.h>
#include<verilated_vcd_c.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time=0;
int main(int argc,char ** argv, char** env)
{
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp=new VerilatedVcdC;

    VPassthrough* top =new VPassthrough;

    top->trace(tfp,5);
    tfp->open("wave.vcd");


    while(sim_time<MAX_SIM_TIME){
    top->io_x0=0,top->io_x1=1,top->io_x2=2,top->io_x3=3;
    top->io_y=rand()%4;

    top->eval();
    tfp->dump(sim_time);
    printf("F = %d\n",top->io_f);
    assert(top->io_f == top->io_y);
    sim_time++;
    }
    tfp->close();
    delete top;

    return 0;

}
