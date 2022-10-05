#include <isa.h>

#define e_addr 

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  if(NO==1){
    cpu.mepc=epc;
    cpu.mcause=0xb;
#ifdef CONFIG_ETRACE	  
	FILE *fp;
  fp=fopen("/home/agustin/ysyx-workbench/nemu/build/nemu-etrace.txt","a");
  assert(fp);
  fprintf(fp,"pc:%lx\tmcause:%lx\n",cpu.mepc,cpu.mcause);
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
