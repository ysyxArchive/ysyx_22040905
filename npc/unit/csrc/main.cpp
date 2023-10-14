#include "all.h"

VerilatedContext *contextp = NULL;
VerilatedVcdC *tfp = NULL;
Vunit *unit = NULL;

void sim_init()
{
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	unit = new Vunit;
#ifdef HAS_WAVE
	contextp->traceEverOn(true);
	unit->trace(tfp, 99);
	tfp->open("build/wave.vcd");
#endif
}

static void step_and_dump_wave()
{
#ifdef HAS_CLOCK
	unit->clock = 1;
#endif
	unit->eval();
#ifdef HAS_WAVE
	contextp->timeInc(1);
	tfp->dump(contextp->time());
#endif

#ifdef HAS_CLOCK
	unit->clock = 0;
	unit->eval();
#endif

#ifdef HAS_WAVE
	contextp->timeInc(1);
	tfp->dump(contextp->time());
#endif
}

void sim_exit()
{
	step_and_dump_wave();
	tfp->close();
}

#ifdef HAS_RESET
void reset()
{
	unit->reset = 0;
	step_and_dump_wave();
	unit->reset = 1;
	step_and_dump_wave();
	unit->reset = 0;
}
#endif

void execute(uint64_t n)
{
	while (n--)
		step_and_dump_wave();
}

void exec() { execute(-1); }

void init(int argc, char *argv[])
{
	sim_init();
#ifdef HAS_RESET
	reset();
#endif
}

int main(int argc, char *argv[])
{
	init(argc, argv);
	srand((unsigned)time(NULL));

	for (int i = 0; i < 20000; i++)
	{
		unit->io_mul_valid = 1;
		unit->io_flush = 0;
		unit->io_mulw = random()%2;
		unit->io_mul_signed= random()%4;
		unit->io_multiplicand= random();
		unit->io_multiplier= random();
		execute(1);
		unit->io_mul_valid = 0;
		while(unit->io_out_valid == 0)execute(1);
		//check
		if(unit->io_multiplicand * unit->io_multiplier == unit->io_result_lo) continue;//printf("right\t");
		else printf("wrong\t");
		if(unit->io_mulw){
			printf("32位乘法\t");
			if(unit->io_mul_signed / 2) printf("signed   X "); else printf("unsigned X ");
			if(unit->io_mul_signed % 2) printf("signed  "); else printf("unsigned");
			printf("\t%lx * %lx = %lx right = %lx\n",unit->io_multiplicand,unit->io_multiplier,unit->io_result_lo,unit->io_multiplicand * unit->io_multiplier);
		}
		else{
			printf("64位乘法\t");
			if(unit->io_mul_signed / 2) printf("signed   X "); else printf("unsigned X ");
			if(unit->io_mul_signed % 2) printf("signed  "); else printf("unsigned");
			printf("\t%lx * %lx = %lx %lx right = %lx\n",unit->io_multiplicand,unit->io_multiplier,unit->io_result_hi,unit->io_result_lo,unit->io_multiplicand * unit->io_multiplier);
		}
		
	}
	printf("\n");
	sim_exit();
}