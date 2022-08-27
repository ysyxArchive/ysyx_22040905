#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <../../isa/riscv64/local-include/reg.h>
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  if(direction==DIFFTEST_TO_DUT){
    for(int i=0;i<32;i++){
      *(uint64_t  *)(dut+8*i) = gpr(i);
    }
  }
  else{
    for(int i=0;i<32;i++){
      gpr(i)= *(uint64_t  *)(dut+8*i);
      //printf("%d:%08lx %08lx\n",i,gpr(i),*(uint64_t  *)(dut+8*i));
    }
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
