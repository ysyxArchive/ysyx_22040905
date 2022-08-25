#ifndef __ALL_H__
#define __ALL_H__

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long  uint64_t;

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1)) // similar to x[hi:lo] in verilog

extern int state;

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
uint32_t pmem_inst_read(uint64_t pc);
uint64_t pmem_data_read(uint32_t addr,int len);
void pmem_data_write(uint32_t addr,int len,uint64_t data);

void dump_gpr();
void dump_itrace();
void print_itrace();
void ftrace_add(uint64_t addr,uint64_t dnpc,int d);
void load_elf(char *s);


extern "C" void init_disasm(const char *triple);
extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
#endif