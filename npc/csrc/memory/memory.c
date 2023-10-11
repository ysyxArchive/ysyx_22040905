#include<string.h>
#include<stdio.h>
#include<assert.h>
#include"../all.h"
#include <sys/time.h>

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

#define DEVICE_BASE 0xa0000000

#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

#define TIMER_IRQ_BEGIN   0x20000000
#define TIMER_IRQ_END    0x2000BFFF


typedef uint32_t paddr_t;

static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};
uint64_t get_pmem_size(){
  return CONFIG_MSIZE;
}
uint8_t* get_pmem(){
  return pmem;
}
int check_bound(uint32_t p,int i){
  if((p<CONFIG_MBASE)|(p>CONFIG_MBASE+CONFIG_MSIZE)){
    if(i) {
      printf("\033[1;31mCheck bound fail,Error at pc:%lx\taddr:0x%08x write\n\033[0m",top->io_pc,p);
      state=NPC_ABORT;
    }
    else {
      printf("\033[1;31mCheck bound fail,Error at pc:%lx\taddr:0x%08x read\n\033[0m",top->io_pc,p);
      state=NPC_ABORT;
    }
    return 0;
  }
  return 1;
}

void pmem_init(char *s){ 
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
  FILE *fp;
  fp=fopen(s,"r");
  assert(fp!=NULL);
  fseek(fp, 0, SEEK_END);
  int size = ftell(fp);
  fseek(fp,0,SEEK_SET);
  int ret=fread(pmem,1,size,fp);
  assert(ret!=0);
  fclose(fp);

  
  /*for(int i=0;i<size;i++){
    printf("%08x\n",pmem_inst[i]);
  }*/
}

uint64_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: assert(0);
  }
}

void host_write(void *addr, int len, uint64_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    case 8: *(uint64_t *)addr = data; return;
    default: printf("LEN CANNOT BE %d\n",len);assert(0);
  }
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

uint64_t pmem_read(paddr_t addr,int len){
  uint64_t ret=0;
  if(check_bound(addr,0))
    ret=host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, int len, uint64_t data) {
  if(check_bound(addr,1))
    host_write(guest_to_host(addr), len, data);
}

//DPI-C
extern "C" void pmem_read(int raddr, long long *rdata) {
  uint64_t addr=((uint64_t)raddr)&((1ull<<32)-1);
  if(addr< 0x80000000) { *rdata=0;return; }

  if(addr==RTC_ADDR){
    difftest_skip_ref();
    *rdata=get_time()%(1ll<<32);
    //return;
  }
  else if(addr==RTC_ADDR+4){
    difftest_skip_ref();
    *rdata=get_time()/(1ll<<32);
    //return;
  }
  else if(addr>=VGACTL_ADDR&&addr<VGACTL_ADDR+8){
    difftest_skip_ref();
    *rdata=get_vgactl_addr(addr);
    //return;
  }
  else *rdata=(long long)pmem_read((((uint64_t)addr)), 8);
#ifdef HAS_TRACE
  FILE *fp;
  fp=fopen("build/mtrace.txt","a");
  fprintf(fp,"0x%08lx:\tpmem_read\taddr=0x%08x\tdata=%016llx\n",top->io_pc,raddr,*rdata);
  fclose(fp);
#endif 
}
extern "C" void pmem_write(int waddr, long long wdata, char wmask) {
  uint64_t addr=((uint64_t) waddr)&((1ull<<32)-1);
  uint64_t data=(uint64_t) wdata;
  uint8_t mask=(uint8_t) wmask;
  if(mask==0)return;
  //printf("%x %llx %x\n",waddr,wdata,wmask);


  int len=0;
  while(mask&1){
    len++;
    mask>>=1;
    if(len>8){printf("wmask:%d\nlen:%d\n",mask,len); assert(0);}
  }


  if(addr==SERIAL_PORT){
    difftest_skip_ref();
    putchar((char)data);
    //return;
  }  
  else if(addr>=FB_ADDR&&addr<FB_ADDR+screen_size()){
    difftest_skip_ref();
    write_vmem(addr,len,data);
    //return;
  } 
  else if(addr>=VGACTL_ADDR&&addr<VGACTL_ADDR+8){
    difftest_skip_ref();
    write_vgactl_addr(addr,len,data);
    //return;
  }
  else pmem_write(addr, len,data);
#ifdef HAS_TRACE
  FILE *fp;
  fp=fopen("build/mtrace.txt","a");
  fprintf(fp,"0x%08lx:\tpmem_write\taddr=0x%08lx\tlen=%08x\tdata=%016lx\n",top->io_pc,addr, len,data);
  fclose(fp);
#endif
}


