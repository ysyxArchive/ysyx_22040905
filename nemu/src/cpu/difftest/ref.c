#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#include <string.h>
#include <../../isa/riscv64/local-include/reg.h>
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction==DIFFTEST_TO_REF){
  memcpy(guest_to_host(RESET_VECTOR), buf, n);
  }else{
    assert(0);
  }
}

void difftest_regcpy(void *dut,uint64_t *pc, bool direction) {
  if(direction==DIFFTEST_TO_DUT){
    for(int i=0;i<32;i++){
      *(uint64_t  *)(dut+8*i) = gpr(i);
    }
    *pc=get_pc();
    *(uint64_t  *)(dut+8*32) = *(uint64_t  *)get_csr(0x300);
    *(uint64_t  *)(dut+8*33) = *(uint64_t  *)get_csr(0x304);
    *(uint64_t  *)(dut+8*34) = *(uint64_t  *)get_csr(0x305);
    *(uint64_t  *)(dut+8*35) = *(uint64_t  *)get_csr(0x341);
    *(uint64_t  *)(dut+8*36) = *(uint64_t  *)get_csr(0x342);
    *(uint64_t  *)(dut+8*37) = *(uint64_t  *)get_csr(0x344);
  }
  else{
    for(int i=0;i<32;i++){
      gpr(i)= *(uint64_t  *)(dut+8*i);
      //printf("%d:%08lx %08lx\n",i,gpr(i),*(uint64_t  *)(dut+8*i));
    }
      change_pc(*pc);
      *(uint64_t  *)get_csr(0x300) = *(uint64_t  *)(dut+8*32);
      *(uint64_t  *)get_csr(0x305) = *(uint64_t  *)(dut+8*33);
      *(uint64_t  *)get_csr(0x341) = *(uint64_t  *)(dut+8*34);
      *(uint64_t  *)get_csr(0x342) = *(uint64_t  *)(dut+8*35);
      *(uint64_t  *)get_csr(0x304) = *(uint64_t  *)(dut+8*36);
      *(uint64_t  *)get_csr(0x344) = *(uint64_t  *)(dut+8*37);

 
  }
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  isa_raise_intr(NO,cpu.pc); 
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
