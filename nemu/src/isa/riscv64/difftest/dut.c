#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

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

void isa_difftest_attach(void *buf,int *len) {
  *len=16*4;
  uint32_t *inst=(uint32_t *)buf;
  uint32_t num[4];
  num[0]=cpu.mstatus;
  num[1]=cpu.mtvec;
  num[2]=cpu.mepc;
  num[3]=cpu.mcause;
 
  inst[0]=0x00000713;                 //addi  a4 $0  0
  inst[1]=(0x737)|((num[0]/(1<<12)));  //lui   a4 num/12
  inst[2]=(0x713)|((num[0]%(1<<12))<<20);  //addi  a4 a4 num%12
  inst[3]=0x30071073;                 //csrrw $0 mstatus a4
  inst[4]=0x00000713;                 //addi  a4 $0  0
  inst[5]=(0x737)|((num[1]/(1<<12)));  //lui   a4 num/12
  inst[6]=(0x713)|((num[1]%(1<<12))<<20);  //addi  a4 a4 num%12
  inst[7]=0x30571073;                 //csrrw $0 mtvec a4
  inst[8]=0x00000713;                 //addi  a4 $0  0
  inst[9]=(0x737)|((num[2]/(1<<12)));  //lui   a4 num/12
  inst[10]=(0x713)|((num[2]%(1<<12))<<20); //addi  a4 a4 num%12
  inst[11]=0x34171073;                //csrrw $0 mepc  a4
  inst[12]=0x00000713;                //addi  a4 $0  0
  inst[13]=(0x737)|((num[3]/(1<<12))); //lui   a4 num/12
  inst[14]=(0x713)|((num[3]%(1<<12))<<20); //addi  a4 a4 num%12
  inst[15]=0x34271073;                //csrrw $0 mcause  a4
}
