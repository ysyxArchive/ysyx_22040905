#include <common.h>
#include "syscall.h"

size_t SYS_yield(){
  yield();
  return 0;
}

size_t SYS_exit(uintptr_t code){
  halt(code);
  return 0;
}

size_t SYS_write(int fd,uintptr_t *buf,size_t count){
  if(fd!=1||fd!=2) return -1;//error
  int i=0;
  for(;i<count&&((*(buf+i))!='\0');i++){
  printf("%c",*(buf+i));
  putch(*(buf+i));
  } 
  return i;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
#ifdef STRACE
  switch(a[0]){
    case 0: printf("SYS_exit(%lx)\n",c->GPRx);break;
    case 1: printf("SYS_yield()\n");break;
    case 4: printf("SYS_write(%lx,%lx,%lx)\n",c->GPR2,c->GPR3,c->GPR4);break;
  }
#endif

  switch (a[0]) {
    case 0: SYS_exit(c->GPRx);break;
    case 1: c->GPRx=SYS_yield();break;
    case 4: SYS_write(c->GPR2,(uintptr_t *)c->GPR3,c->GPR4);break; 
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
