#include <common.h>
#include "syscall.h"

size_t sys_yield(){
  yield();
  return 0;
}

size_t sys_exit(uintptr_t code){
  halt(code);
  return 0;
}

size_t sys_write(int fd,const void *buf,size_t count){
  char *buff=(char *)buf;
  if(!((fd==1)||(fd==2))) return -1;//error
  int i=0;
  for(;i<count&&((*(buff+i))!='\0');i++){
  putch(*(buff+i));
  } 
  return i+1;
}
int sys_brk(void *addr){
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
#ifdef STRACE
  switch(a[0]){
    case 0: printf("sys_exit(%lx)\n",c->GPRx);break;
    case 1: printf("sys_yield()\n");break;
    case 4: printf("sys_write(%lx,%lx,%lx)\n",c->GPR2,c->GPR3,c->GPR4);break;
    case 9: printf("sys_brk(%lx)\n",c->GPR2);break;
  }
#endif

  switch (a[0]) {
    case 0: c->GPRx=sys_exit(c->GPRx);break;
    case 1: c->GPRx=sys_yield();break;
    case 4: c->GPRx=sys_write(c->GPR2,(void *)c->GPR3,c->GPR4);break;
    case 9: c->GPRx=sys_brk((void *)c->GPR2);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
