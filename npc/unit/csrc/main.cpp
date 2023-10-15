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

#ifdef MUL
void check_mul(){
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
	
}
#endif

void check_div(){
	for(int i=0;i<1;i++){
		unit->io_dividend = 0x8000000000000000;//random();
		unit->io_divisor = 0xa;//random();
		unit->io_div_valid = 1;
		unit->io_divw = 0;//random()%2;
		unit->io_div_signed = 0;//random()%2;
		unit->io_flush = 0;
		execute(1);
		unit->io_div_valid = 0;
		while(unit->io_out_valid == 0){execute(1);}
		//check
		if(unit->io_divw){
			if(unit->io_div_signed){
				if((int32_t)unit->io_dividend / (int32_t)unit->io_divisor == (int32_t)unit->io_quotient) continue;//printf("right\t");
				if((int32_t)unit->io_dividend % (int32_t)unit->io_divisor == (int32_t)unit->io_remainder) continue;//printf("right\t"
				else printf("wrong\t");
			}
			else{
				if(unit->io_dividend / unit->io_divisor == unit->io_quotient) continue;//printf("right\t");
				if(unit->io_dividend % unit->io_divisor == unit->io_remainder) continue;//printf("right\t");
				else printf("wrong\t");
			}
		}
		else{
			if(unit->io_div_signed){
				if((int64_t)unit->io_dividend / (int64_t)unit->io_divisor == (int64_t)unit->io_quotient) continue;//printf("right\t");
				if((int64_t)unit->io_dividend % (int64_t)unit->io_divisor == (int64_t)unit->io_remainder) continue;//printf("right\t");
				else printf("wrong\t");
			}
			else{
				if(unit->io_dividend / unit->io_divisor == unit->io_quotient) continue;//printf("right\t");
				if(unit->io_dividend % unit->io_divisor == unit->io_remainder) continue;//printf("right\t");
				else printf("wrong\t");
			}
		}
		if(unit->io_divw){
			if(unit->io_div_signed){
				printf("32位有符号除法\t");
				printf("%lx / %lx = %lx ... %lx right = %lx ... %lx\n",unit->io_dividend,unit->io_divisor,unit->io_quotient,unit->io_remainder,unit->io_dividend / unit->io_divisor,unit->io_dividend % unit->io_divisor);
			}
			else{
				printf("32位无符号除法\t");
				printf("%lx / %lx = %lx ... %lx right = %lx ... %lx\n",unit->io_dividend,unit->io_divisor,unit->io_quotient,unit->io_remainder,unit->io_dividend / unit->io_divisor,unit->io_dividend % unit->io_divisor);
			}
		}
		else{
			if(unit->io_div_signed){
				printf("64位有符号除法\t");
				printf("%lx / %lx = %lx ... %lx right = %lx ... %lx\n",unit->io_dividend,unit->io_divisor,unit->io_quotient,unit->io_remainder,unit->io_dividend / unit->io_divisor,unit->io_dividend % unit->io_divisor);
			}
			else{
				printf("64位无符号除法\t");
				printf("%lx / %lx = %lx ... %lx right = %lx ... %lx\n",unit->io_dividend,unit->io_divisor,unit->io_quotient,unit->io_remainder,unit->io_dividend / unit->io_divisor,unit->io_dividend % unit->io_divisor);
			}
		}
	}

}
int main(int argc, char *argv[])
{
	init(argc, argv);
	srand((unsigned)time(NULL));
	check_div();
	sim_exit();
}