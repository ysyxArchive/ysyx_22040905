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
    int a=rand()%100;
    top->io_in=a;
    top->eval();
    tfp->dump(sim_time);
    sim_time++;
    printf("a = %d, f = %d\n", a, top->io_out);
    assert(top->io_out == a);
    }
    tfp->close();
    delete top;

    return 0;

}
