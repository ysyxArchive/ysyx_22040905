#ifndef __CPU_DIFFTEST_H__
#define __CPU_DIFFTEST_H__

#include <common.h>
#include <difftest-def.h>

#ifdef CONFIG_DIFFTEST
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);
void difftest_set_patch(void (*fn)(void *arg), void *arg);
void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_detach();
void difftest_attach();
#else
static inline void difftest_skip_ref() {}
static inline void difftest_skip_dut(int nr_ref, int nr_dut) {}
static inline void difftest_set_patch(void (*fn)(void *arg), void *arg) {}
static inline void difftest_step(vaddr_t pc, vaddr_t npc) {}
static inline void difftest_detach() {}
static inline void difftest_attach() {}
#endif

extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);

static inline bool difftest_check_reg(const char *name, vaddr_t pc, word_t ref, word_t dut) {
  if (ref != dut) {
    Log("%s is different after executing instruction at pc = " FMT_WORD
        ", right = " FMT_WORD ", wrong = " FMT_WORD ", diff = " FMT_WORD,
        name, pc, ref, dut, ref ^ dut);
    return false;
  }
  return true;
}

#ifndef ir_max
#define ir_max 10
#endif

#ifndef iringbuff
#define iringbuff
static char iringbuf[ir_max][2048];
int ir_head;
int ir_tail;
int ir_full;
#endif

#ifndef init_ir
#define init_ir
void init_iringbuf(){
  for(int i=0;i<ir_max;i++){
    strcpy(iringbuf[i],"");
  }
  ir_head=0;
  ir_tail=0;
  ir_full=0;
}
#endif
#ifndef ir_add
#define ir_add
void iringbuf_add(char* s){
  if(ir_full)ir_head=(ir_head+1)%ir_max;
  strcpy(iringbuf[ir_tail],s);
  ir_tail=(ir_tail+1)%ir_max;
  if(ir_tail==0)ir_full=1;
}
#endif
#ifndef ir_p
#define ir_p
void iringbuf_print(){
  if(ir_tail>ir_head){
    for(int i=ir_head;i<ir_tail;i++){
      printf("%s\n",iringbuf[i]);
      }
    }
  else if(ir_full){
    for(int i=ir_head;i<ir_max;i++)
      printf("%s\n",iringbuf[i]);
    for(int i=0;i<ir_tail;i++)
      printf("%s\n",iringbuf[i]);
  }
  printf("\n");
}
#endif
#endif
