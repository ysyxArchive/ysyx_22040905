#include <isa.h>


word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  if(NO==1){
    cpu.mepc=epc;
    if(epc<0x83000000)cpu.mcause=0xb;
    else cpu.mcause=0x3;
#ifdef CONFIG_ETRACE	  
	FILE *fp;
  fp=fopen("/home/agustin/ysyx-workbench/nemu/build/nemu-etrace.txt","a");
  assert(fp);
  fprintf(fp,"pc:0x%lx\tmcause:0x%lx\tcpu.mtvec:0x%lx\n",cpu.mepc,cpu.mcause,cpu.mtvec);
  fclose(fp); 
#endif
    return cpu.mtvec;
  }
  else if(NO==2){
    return cpu.mepc;
  }
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
