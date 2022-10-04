#include<string.h>
#include<stdio.h>
#include<assert.h>
#include"../all.h"
#include <sys/time.h>
 
long getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)1e6 + currentTime.tv_usec;
}

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


typedef uint32_t paddr_t;

static uint8_t pmem[CONFIG_MSIZE] __attribute((aligned(4096))) = {};
uint64_t get_pmem_size(){
  return CONFIG_MSIZE;
}
uint8_t* get_pmem(){
  return pmem;
}
void check_bound(uint32_t p){
  if((p<CONFIG_MBASE)|(p>CONFIG_MBASE+CONFIG_MSIZE)){printf("%d\n",p);assert(0);}
}
extern "C" void pmem_inst_read(long long pc,int *inst){
    uint32_t p=(uint32_t)pc;
    if(p==0){*inst=0;return;}
    check_bound(p);
    *inst=(int)pmem_read(pc,4);
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
  check_bound(addr);
  uint64_t ret=host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, int len, uint64_t data) {
  check_bound(addr);
  host_write(guest_to_host(addr), len, data);
}

//DPI-C
extern "C" void pmem_read(long long raddr, long long *rdata) {
  if(raddr==RTC_ADDR){
    *rdata=getMicrotime()%(1ll<<32);
    return;
  }
  if(raddr==RTC_ADDR+4){
    *rdata=getMicrotime()/(1ll<<32);
    return;
  }
  
  if(raddr==0) { *rdata=0;return; }
  *rdata=(long long)pmem_read((((uint64_t)raddr)), 8);
  FILE *fp;
  fp=fopen("build/mtrace.txt","a");
  fprintf(fp,"0x%08lx:\tpmem_read\taddr=0x%08llx\tdata=%016llx\n",top->io_pc,raddr,*rdata);
  fclose(fp); 
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  //printf("%lld %lld %d\n",waddr,wdata,wmask);
  uint64_t addr=waddr;
  uint64_t data=wdata;
  uint8_t mask=wmask;
  if(addr==0x00a00003f8){
    printf("%c",(char)data );
    return;
  }
  if(mask==0)return;
  int len=0;
  while(mask&1){
    len++;
    mask>>=1;
    if(len>8){printf("wmask:%d\nlen:%d\n",mask,len); assert(0);}
  }
  pmem_write(addr, len,data);
  FILE *fp;
  fp=fopen("build/mtrace.txt","a");
  fprintf(fp,"0x%08lx:\tpmem_write\taddr=0x%08lx\tlen=%08x\tdata=%016lx\n",top->io_pc,addr, len,data);
  fclose(fp);
}
