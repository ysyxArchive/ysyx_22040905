#include <common.h>
#include "syscall.h"

size_t SYS_yield(){
  yield();
  return 0;
}

void SYS_exit(uintptr_t code){
  halt(code);
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  printf("%lx\n",a[0]);
  switch (a[0]) {
    case 0: SYS_exit(c->GPRx);break;
    case 1: c->GPRx=SYS_yield();break; 
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
