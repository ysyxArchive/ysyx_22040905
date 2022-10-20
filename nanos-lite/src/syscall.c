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

size_t SYS_write(int fd,const void *buf,size_t count){
  char *buff=(char *)buf;
  if(!((fd==1)||(fd==2))) return -1;//error
  int i=0;
  for(;i<count&&((*(buff+i))!='\0');i++){
  putch(*(buff+i));
  } 
  printf("\n%c\n",*(buff+8));
  return i;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
#ifdef STRACE
  switch(a[0]){
    case 0: printf("SYS_exit(%lx)\n",c->GPRx);break;
    case 1: printf("SYS_yield()\n");break;
    case 4: printf("\nSYS_write(%lx,%lx,%lx)\n",c->GPR2,c->GPR3,c->GPR4);break;
  }
#endif

  switch (a[0]) {
    case 0: SYS_exit(c->GPRx);break;
    case 1: c->GPRx=SYS_yield();break;
    case 4: c->GPRx=SYS_write(c->GPR2,(void *)c->GPR3,c->GPR4);break; 
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
