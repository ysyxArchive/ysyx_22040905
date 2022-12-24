#ifndef __ALL_H__
#define __ALL_H__
#include <cstdint>
#include "../build/obj_dir/Vtop.h"
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long  uint64_t;

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

#define DIFFTEST_TO_DUT 0
#define DIFFTEST_TO_REF 1
void difftest_step(uint64_t pc,uint64_t pcc);
void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_skip_ref();

extern int state;
extern uint64_t *cpu_gpr;
extern const char *cpu_name[32];
extern uint64_t pc;
extern Vtop* top; 

uint64_t get_pmem_size();
uint8_t* get_pmem();
void execute(uint64_t n);

void sdb_mainloop();
void init_regex();
void init_sdb();
void init_wp_pool();
void info_wp();
void set_wp(char * exp);
void del_wp(int id);
uint64_t expr(char *e,bool *success);

void pmem_init(char *s);
uint64_t pmem_read(uint32_t addr,int len);
void pmem_write(uint32_t addr,int len,uint64_t data);

void dump_gpr();
void dump_itrace();
void print_itrace(uint64_t pc);
void ftrace_add(uint64_t addr,uint64_t dnpc,int d);
void load_elf(char *s);


extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif