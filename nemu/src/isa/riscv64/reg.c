#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  printf("%s:%016lx\n","pc",cpu.pc);
  for(int i=0;i<32;i++){
    printf("%s:%016lx\n",reg_name(i,8),gpr(i));
  }
  printf("cpu.mcause:%016lx\ncpu.mstatus:%016lx\ncpu.mepc:%016lx\n",cpu.mcause,cpu.mstatus, cpu.mepc);
}

word_t isa_reg_str2val(const char *s, bool *success) {
  if(strcmp(s,"$pc")==0){
    return cpu.pc;
  }  
  if(strcmp(s,"$mcause")==0){
    return cpu.mcause;
  }  
  if(strcmp(s,"$mstatus")==0){
    return cpu.mstatus;
  }  
  if(strcmp(s,"$mepc")==0){
    return cpu.mepc;
  }
  if(strcmp(s,"$mip")==0){
    return cpu.mip;
  }
  if(strcmp(s,"$mie")==0){
    return cpu.mie;
  }
  for(int i=0;i<32;i++){
    if(strcmp(regs[i],s+1)==0||((!i)&&(strcmp(s,"$0")))){//ignore '$',except "$0"
      *success=true;
      return gpr(i);//printf("%s\t\t%ld\n",reg_name(i,8),gpr(i));

    }
  }
  success=false;
  return 0;
}
