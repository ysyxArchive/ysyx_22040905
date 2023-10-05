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
        }
        else
          ev.event = EVENT_SYSCALL;
        c->mepc+=4;
        c->mcause=0;
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
  //set bit
  if(enable){
  // initialize timer interrupt
    outl(0x20004000,1000);
    outl(0x2000bff8,0);

  //mstatus_MIE
    asm volatile("csrr t1, mstatus");
    asm volatile("ori t1, t1, 0x8");
    asm volatile("csrw mstatus, t1");


  //mie_MTIP
    asm volatile("csrr t1, mie");
    asm volatile("ori t1, t1, 0x80");
    asm volatile("csrw mie, t1");

  }
  //clear bit
  else{
    asm volatile("csrr t1, mstatus");
    asm volatile("li t0, 0x8");
    asm volatile("xor t0, t0, -81");
    asm volatile("and t1, t1, t0");
    asm volatile("csrw mstatus, t1");

    asm volatile("csrr t1, mie");
    asm volatile("li t0, 0x80");
    asm volatile("xor t0, t0, -81");
    asm volatile("and t1, t1, t0");
    asm volatile("csrw mie, t1");
  }
}
