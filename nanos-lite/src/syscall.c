#include <common.h>
#include "syscall.h"
#include <fs.h>


size_t sys_exit(uintptr_t code){
  halt(code);
  return 0;
}

size_t sys_yield(){
  yield();
  return 0;
}

size_t sys_open(uintptr_t pathname,uintptr_t flags,uintptr_t mode){
  return fs_open((char *)pathname,(int)flags,(int)mode);
}

size_t sys_read(uintptr_t fd,uintptr_t buf,uintptr_t len){
  return fs_read((int)fd, (void *)buf, (size_t)len);
}

size_t sys_write(int fd,const void *buf,size_t count){
  return fs_write(fd,buf,count);
}

size_t sys_close(uintptr_t fd){
  return fs_close((int)fd);
}

size_t sys_lseek(uintptr_t fd, uintptr_t offset, uintptr_t whence){
  return fs_lseek((int) fd, (size_t) offset, (int) whence);
}

size_t sys_brk(void *addr){
  return 0;
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
#ifdef STRACE
  switch(a[0]){
    case 0: printf("sys_exit(%lx)\n",c->GPRx);break;
    case 1: printf("sys_yield\n");break;
    case 2: printf("sys_open(%s,%lx,%lx)\n",(char *)c->GPR2,c->GPR3,c->GPR4);break;
    case 3: printf("sys_read(%s,%lx,%lx)\n",fd_name(c->GPR2),c->GPR3,c->GPR4);break;
    case 4: printf("sys_write(%s,%lx,%lx)\n",fd_name(c->GPR2),c->GPR3,c->GPR4);break;
    case 7: printf("sys_close(%s)\n",fd_name(c->GPR2));break;
    case 8: printf("sys_lseek(%s,%lx,%lx)\n",fd_name(c->GPR2),c->GPR3,c->GPR4);break;
    case 9: printf("sys_brk(%lx)\n",c->GPR2);break;
  }
#endif

  switch (a[0]) {
    case 0: c->GPRx=sys_exit(c->GPRx);break;
    case 1: c->GPRx=sys_yield();break;
    case 2: c->GPRx=sys_open(c->GPR2,c->GPR3,c->GPR4);break;
    case 3: c->GPRx=sys_read(c->GPR2,c->GPR3,c->GPR4);break;
    case 4: c->GPRx=sys_write(c->GPR2,(void *)c->GPR3,c->GPR4);break;
    case 7: c->GPRx=sys_close(c->GPR2);break;
    case 8: c->GPRx=sys_lseek(c->GPR2,c->GPR3,c->GPR4);break;
    case 9: c->GPRx=sys_brk((void *)c->GPR2);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
