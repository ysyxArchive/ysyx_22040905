#include<nvboard.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<verilated.h>
#include<Vtop.h>
#include<verilated_vcd_c.h>
#define MAX_SIM_TIME 20
static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

vluint64_t sim_time=0;
int main(int argc,char ** argv, char** env)
{
    nvboard_bind_all_pins(&dut);
	nvboard_init();

	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp=new VerilatedVcdC;

	Vtop* top =new Vtop;
	top->trace(tfp,5);
	tfp->open("wave.vcd");

	while(sim_time<MAX_SIM_TIME){
	nvboard_update();
	int a=rand()&1;
	int b=rand()&1;
	top->a=a;
	top->b=b;
	top->eval();
	tfp->dump(sim_time);
	sim_time++;
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
	assert(top->f == a^b);
	}
	tfp->close();
	delete top;
    nvboard_quit();
	return 0;

}
