#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
#include <macro.h>

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //if(ref_r->pc!=pc)return false;
  int flag=1;
  for(int i=0;i<32;i++)
  {
    if(!difftest_check_reg(reg_name(i,64),pc,ref_r->gpr[i],gpr(i)))flag=0;
  }
  if(flag) return true;
  return false;
}

void isa_difftest_attach(uint32_t *buf,int *len) {
}
