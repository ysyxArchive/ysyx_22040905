#include <am.h>
#include <klib.h>
#include <riscv/riscv.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("macuse:%d\n",c->mcause);
    //printf("%lx\n",c->gpr[17]);
    switch (c->mcause) {
      case 0xb: 
        if(c->gpr[17]==-1){
          ev.event = EVENT_YIELD;
          c->mepc+=4;
        }
        else
          ev.event = EVENT_SYSCALL;
        //c->mcause=0;
        break;
      case 0x8000000000000007: 
        ev.event = EVENT_IRQ_TIMER; break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
  if(enable){
//mstatus_MIE
    asm volatile("csrsi mstatus, 8"); 
//mie_MTIP
    //asm volatile("li t0, 0x80");
    //asm volatile("csrrs x0,mie, t0");  
  }
  else{
    //asm volatile("csrci mstatus, 8"); 

    asm volatile("li t0, 0x80");
    asm volatile("csrrc x0,mie, t0");  
  }
}
