#include<string.h>
#include<stdio.h>
#include<assert.h>
#include"../all.h"

const int pmem_size=32768;
#define CONFIG_MBASE 0x80000000
typedef uint32_t paddr_t;

uint32_t pmem_inst[pmem_size];
uint8_t  pmem_data[pmem_size*8];

uint32_t pmem_inst_read(uint64_t pc){
  return pmem_inst[(pc-0x80000000)/4];
}
void pmem_init(char *s){ 
  //init inst
  FILE *fp;
  fp=fopen(s,"r");
  assert(fp!=NULL);
  fseek(fp, 0, SEEK_END);
  int size = ftell(fp);
  size=size/4;
  fseek(fp,0,SEEK_SET);
  int ret=fread(pmem_inst,4,size,fp);
  assert(ret!=0);
  fclose(fp);

  //inst data
  for(int i=0;i<pmem_size;i++){
    pmem_data[i]=0;
  }
  /*for(int i=0;i<size;i++){
    printf("%08x\n",pmem[i]);
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
    default: assert(0);
  }
}

uint8_t* guest_to_host(paddr_t paddr) { return pmem_data + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem_data + CONFIG_MBASE; }

uint64_t pmem_data_read(paddr_t addr,int len){
  uint64_t ret=host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_data_write(paddr_t addr, int len, uint64_t data) {
  host_write(guest_to_host(addr), len, data);
}


