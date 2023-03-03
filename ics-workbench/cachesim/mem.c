#include <string.h>
#include "common.h"

static uint8_t mem[MEM_SIZE];
static uint8_t mem_diff[MEM_SIZE];

void init_mem(void) {
  int i;
  for (i = 0; i < MEM_SIZE; i ++) {
    mem[i] = rand() & 0xff;
  }

  memcpy(mem_diff, mem, MEM_SIZE);
}

void mem_read(uintptr_t block_num, uint8_t *buf) {
  //printf("%lx %lx %x\n",block_num,(block_num << BLOCK_WIDTH),MEM_SIZE);
  assert((block_num << BLOCK_WIDTH)<MEM_SIZE);
  memcpy(buf, mem + (block_num << BLOCK_WIDTH), BLOCK_SIZE);
  //printf("en_read:%lx\t",(block_num << BLOCK_WIDTH));
  //for(int i=0;i<BLOCK_SIZE;i++){
  //  printf("%02x",buf[i]);
  //}
  //printf("\n");
  cycle_increase(25);
}

void mem_write(uintptr_t block_num, const uint8_t *buf) {
  assert((block_num << BLOCK_WIDTH)<MEM_SIZE);
  memcpy(mem + (block_num << BLOCK_WIDTH), buf, BLOCK_SIZE);
  //printf("en_write:%lx\t",(block_num << BLOCK_WIDTH));
  //for(int i=0;i<BLOCK_SIZE;i++){
  //  printf("%02x",buf[i]);
  //}
  //printf("\n");
  cycle_increase(6);
}

uint32_t mem_uncache_read(uintptr_t addr) {
  uint32_t *p = (void *)mem_diff + (addr & ~0x3);
  //printf("un_read:%lx\t%x\n",addr & ~0x3,*p);
  return *p;
}

void mem_uncache_write(uintptr_t addr, uint32_t data, uint32_t wmask) {
  uint32_t *p = (void *)mem_diff + (addr & ~0x3);
  *p = (*p & ~wmask) | (data & wmask);
  //printf("un_write:%lx\t%x\n",addr & ~0x3,*p);
}
