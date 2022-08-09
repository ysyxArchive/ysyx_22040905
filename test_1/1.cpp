#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include<Vtop.h>
#include<verilated_vcd_c.h>
#define MAX_SIM_TIME 20
vluint64_t sim_time=0;
int main(int argc,char ** argv, char** env)
{
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp=new VerilatedVcdC;

	Vtop* top =new Vtop;
	top->trace(tfp,5);
	tfp->open("wave.vcd");

	while(sim_time<MAX_SIM_TIME){
	int a=rand()&1;
	int b=rand()&1;
	top->a=a;
	top->b=b;
	top->eval();
	tfp->dump(sim_time);
	sim_time++;
	printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == (a^b));
	}
	tfp->close();
	delete top;

	return 0;

}
