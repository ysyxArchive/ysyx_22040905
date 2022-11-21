#include <common.h>
#include "syscall.h"
#include <fs.h>
#include "time.h"
#include <proc.h>

void naive_uload(PCB *pcb, const char *filename);

size_t sys_exit(uintptr_t code){
  naive_uload(NULL,"/bin/nterm");
  //halt(code);
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

int sys_gettimeofday(uintptr_t v,uintptr_t z){
  struct timeval *tv=(struct timeval *)v;
  struct timezone *tz=(struct timezone *)z;
  if(tv!=NULL){
    ioe_read(AM_TIMER_UPTIME,&(tv->tv_usec));
    tv->tv_sec=tv->tv_usec/1000000;
    tv->tv_usec=tv->tv_usec%1000000;
  }
  if(tz!=NULL){
    tz->tz_minuteswest=0;
    tz->tz_dsttime=0;
  }
  return 0;
}
extern char _end;
intptr_t program_break=(intptr_t)&_end;
size_t sys_brk(void *addr){
  program_break=(uintptr_t)addr;
  return 0;
}

size_t sys_execve(intptr_t p,intptr_t a,intptr_t e){
  const char *pathname=(const char *)p;
  naive_uload(NULL,pathname);
  assert(0);
  return -1;
}
char *ma[]={"SEEK_SET","SEEK_CUR","SEEK_END"};
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
#ifdef STRACE
  switch(a[0]){
    case 0: printf("sys_exit(0x%lx)\n",c->GPRx);break;
    case 1: printf("sys_yield\n");break;
    case 2: printf("sys_open(%s,0x%lx,0x%lx)\n",(char *)c->GPR2,c->GPR3,c->GPR4);break;
    case 3: printf("sys_read(%s,0x%lx,0x%lx)\n",fd_name(c->GPR2),c->GPR3,c->GPR4);break;
    case 4: printf("sys_write(%s,0x%lx,0x%lx)\n",fd_name(c->GPR2),c->GPR3,c->GPR4);break;
    case 7: printf("sys_close(%s)\n",fd_name(c->GPR2));break;
    case 8: printf("sys_lseek(%s,0x%lx,%s)\n",fd_name(c->GPR2),c->GPR3,ma[c->GPR4]);break;
    case 9: printf("sys_brk(0x%lx)\n",c->GPR2);break;
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
    case 13:c->GPRx=sys_execve(c->GPR2,c->GPR3,c->GPR4);break;
    case 19:c->GPRx=sys_gettimeofday(c->GPR2,c->GPR3);break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
