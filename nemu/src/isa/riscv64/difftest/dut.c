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
  *len=33*4;
  
  buf[0]=0x00000713;                             //addi  a4,$0,0
  buf[1]=(0x737)|(BITS(cpu.mstatus,63,44)<<12);  //lui   a4,num[63,44]
  buf[2]=(0x713)|(BITS(cpu.mstatus,43,32)<<20);  //addi  a4,a4,num[43,32]
  buf[3]=0x0c71713;                              //slli a4,a4,0x0c
  buf[4]=(0x713)|(BITS(cpu.mstatus,31,20)<<20);  //addi  a4,a4,num[31,20]
  buf[5]=0x0c71713;                              //slli a4,a4,0x0c
  buf[6]=(0x713)|(BITS(cpu.mstatus,19,8)<<20);   //addi  a4,a4,num[19,8]
  buf[7]=0x0871713;                              //slli a4,a4,0x08
  buf[8]=(0x713)|(BITS(cpu.mstatus,7,0)<<20);    //addi  a4,a4,num[7,0]
  buf[9]=0x30071073;                             //csrrw $0,mstatus,a4
 


  
  buf[10]=0x00000713;                        //addi  a4,$0,0
  buf[11]=(0x737)|(BITS(cpu.mepc,63,44)<<12);  //lui   a4,num[63,44]
  buf[12]=(0x713)|(BITS(cpu.mepc,43,32)<<20);  //addi  a4,a4,num[43,32]
  buf[13]=0x0c71713;                         //slli a4,a4,0x0c
  buf[14]=(0x713)|(BITS(cpu.mepc,31,20)<<20);  //addi  a4,a4,num[31,20]
  buf[15]=0x0c71713;                         //slli a4,a4,0x0c
  buf[16]=(0x713)|(BITS(cpu.mepc,19,8)<<20);   //addi  a4,a4,num[19,8]
  buf[17]=0x0871713;                         //slli a4,a4,0x08
  buf[18]=(0x713)|(BITS(cpu.mepc,7,0)<<20);    //addi  a4,a4,num[7,0]
  buf[19]=0x34171073;                        //csrrw $0,mepc,a4

  
  buf[20]=0x00000713;                        //addi  a4,$0,0
  buf[21]=(0x737)|(BITS(cpu.mcause,63,44)<<12);  //lui   a4,num[63,44]
  buf[22]=(0x713)|(BITS(cpu.mcause,43,32)<<20);  //addi  a4,a4,num[43,32]
  buf[23]=0x0c71713;                         //slli a4,a4,0x0c
  buf[24]=(0x713)|(BITS(cpu.mcause,31,20)<<20);  //addi  a4,a4,num[31,20]
  buf[25]=0x0c71713;                         //slli a4,a4,0x0c
  buf[26]=(0x713)|(BITS(cpu.mcause,19,8)<<20);   //addi  a4,a4,num[19,8]
  buf[27]=0x0871713;                         //slli a4,a4,0x08
  buf[28]=(0x713)|(BITS(cpu.mcause,7,0)<<20);    //addi  a4,a4,num[7,0]
  buf[29]=0x34271073;                        //csrrw $0,mcause,a4

  
  // set mstatus.MPRV to pass difftest
  buf[30]=(0x737)|(20<<12);                  //lui a0, (1 << (17-12))
  buf[31]=0xa36333;                          //or t1, t1, a0
  buf[32]=0x30031073;                        //csrrw $0,mstatus, t1
  

  buf[33]=0x00000713;                        //addi  a4,$0,0
  buf[34]=(0x737)|(BITS(cpu.mtvec,63,44)<<12);  //lui   a4,num[63,44]
  buf[35]=(0x713)|(BITS(cpu.mtvec,43,32)<<20);  //addi  a4,a4,num[43,32]
  buf[36]=0x0c71713;                         //slli a4,a4,0x0c
  buf[37]=(0x713)|(BITS(cpu.mtvec,31,20)<<20);  //addi  a4,a4,num[31,20]
  buf[38]=0x0c71713;                         //slli a4,a4,0x0c
  buf[39]=(0x713)|(BITS(cpu.mtvec,19,8)<<20);   //addi  a4,a4,num[19,8]
  buf[40]=0x0871713;                         //slli a4,a4,0x08
  buf[41]=(0x713)|(BITS(cpu.mtvec,7,0)<<20);    //addi  a4,a4,num[7,0]
  buf[42]=0x30571073;                        //csrrw $0,mtvec,a4
}
