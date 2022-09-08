#include<string.h>
#include<stdio.h>
#include<assert.h>
#include"../all.h"

#define pmem_size 0x8000
#define CONFIG_MBASE 0x80000000
typedef uint32_t paddr_t;

uint8_t  pmem[pmem_size];
uint64_t get_pmem_size(){
  return pmem_size;
}
uint8_t* get_pmem(){
  return pmem;
}
extern "C" void pmem_inst_read(long long pc,int *inst){
    uint32_t p=(uint32_t)pc;
    if(p==0){*inst=0;return;}
    if((p<CONFIG_MBASE)|(p>CONFIG_MBASE+pmem_size)){printf("%d\n",p);assert(0);}
    *inst=(int)pmem_read(pc,4);
}
void pmem_init(char *s){ 
  for(int i=0;i<pmem_size;i++){
    pmem[i]=0;
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
  uint64_t ret=host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, int len, uint64_t data) {
  host_write(guest_to_host(addr), len, data);
}
//DPI-C
extern "C" void pmem_read(long long raddr, long long *rdata) {
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
