#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  //if(ref_r->pc!=pc)return false;
  for(int i=0;i<32;i++)
  {
    if(ref_r->gpr[i]!=gpr(i)){
    printf("pc:%lx\n%s:\nref_: %ld\t dut_: %ld\n",pc,reg_name(i,8),ref_r->gpr[i],gpr(i));
    return false;
    } 
  }
  return true;
}

void isa_difftest_attach() {
}
