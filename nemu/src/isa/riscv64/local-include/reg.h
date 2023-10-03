#ifndef __RISCV64_REG_H__
#define __RISCV64_REG_H__

#include <common.h>
#include <isa.h>
#ifndef CSRs
#define CSRs

#define CSR_MSTATUS 0x300
#define CSR_MTVEC 0x305
#define CSR_MEPC 0x341
#define CSR_MCAUSE 0x342

#endif

static inline int check_reg_idx(int idx) {
  IFDEF(CONFIG_RT_CHECK, assert(idx >= 0 && idx < 32));
  return idx;
}

static inline uint64_t* get_csr(uint64_t idx){
  switch(idx)
  {
    case CSR_MSTATUS : return &(cpu.mstatus); 
    case CSR_MTVEC : return &(cpu.mtvec);
    case CSR_MEPC : return &(cpu.mepc);
    case CSR_MCAUSE : return &(cpu.mcause); 
    default : assert(0);
  }
  //assert(0);
  return 0;
}

#define gpr(idx) (cpu.gpr[check_reg_idx(idx)])
#define CSR(idx) (*get_csr(idx))

static inline const char* reg_name(int idx, int width) {
  extern const char* regs[];
  return regs[check_reg_idx(idx)];
}

#endif

