#include <common.h>
#include "syscall.h"
extern void do_syscall(Context *c);
#define CLINT_BASE 0x20000000
#define CLINT_MTIMECMP (CLINT_BASE + 0x4000)

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD: 
      printf("YIELD\n");break;
    case EVENT_SYSCALL: 
      do_syscall(c);break; 
    case EVENT_IRQ_TIMER:
      *((uint64_t *) CLINT_MTIMECMP) += 0x100000;
      printf("\nt\n");break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
