#include "common.h"
#include <inttypes.h>

void mem_read(uintptr_t block_num, uint8_t *buf);
void mem_write(uintptr_t block_num, const uint8_t *buf);

static uint64_t cycle_cnt = 0;
static uint64_t hit_cnt = 0;
static uint64_t miss_cnt = 0;

void cycle_increase(int n) { cycle_cnt += n; }


uint8_t ***cache_data = NULL;
uint8_t **D = NULL; // dirty
uint32_t **cache_tag = NULL;
uint8_t **V = NULL; // valid
uint8_t *buf = NULL;

int tag_width = 0, idx_width = 0, offset_width = 0;
int way, line, line_size;

int check_tag(int idx, int tag)
{
  for (int i = 0; i < way; i++)
  {
    if (cache_tag[i][idx] == tag)
    {
      return i;
    }
  }
  return -1;
}

uint32_t cache_read(uintptr_t addr)
{
  uint32_t offset = BITS(addr & ~0x3, offset_width - 1, 0);
  uint32_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
  uint32_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
  // printf("%lx %x %x %x\n",addr,tag,idx,offset);
  for (int i = 0; i < way; i++)
  {
    if (cache_tag[i][idx] == tag && V[i][idx])
    { // hit
      hit_cnt++;
      //printf("hit_cnt:%ld\t",hit_cnt);
      //printf("%lx\t%08x\n",addr & ~0x3,(*(uint32_t *)(cache_data[i][idx] + offset)));
      return *(uint32_t *)(cache_data[i][idx] + offset);
    }
  }
  // miss
  // Replacement algorithm: random
  miss_cnt++;
  int way2 = rand() % way;
  // dirty
  if (D[way2][idx])
  {
    //printf("d\n");
    mem_write(cache_tag[way2][idx]<<idx_width | idx, cache_data[way2][idx]);
    D[way2][idx] = 0;
  }

  mem_read(addr >> BLOCK_WIDTH, buf);
  for (int i = 0; i < line_size; i++)
  {
    cache_data[way2][idx][i] = buf[i];
  }
  cache_tag[way2][idx] = tag;
  V[way2][idx] = 1;
  return *(uint32_t *)(cache_data[way2][idx] + offset);
}

void cache_write(uintptr_t addr, uint32_t data, uint32_t wmask)
{
  uint32_t offset = BITS(addr & ~0x3, offset_width - 1, 0);
  uint32_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
  uint32_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
  // printf("%lx %x %x %x\n",addr,tag,idx,offset);
  for (int i = 0; i < way; i++)
  {
    if (cache_tag[i][idx] == tag && V[i][idx])
    { // hit
      hit_cnt++;
      //printf("hit\n");
      uint32_t *p = (uint32_t *)(cache_data[i][idx] + offset);
      *p = (*p & ~wmask) | (data & wmask);
      D[i][idx] = 1;
      return;
    }
  }
  // miss
  // Replacement algorithm: random
  miss_cnt++;
  int way2 = rand() % way;
  // dirty
  if (D[way2][idx])
  {
    //printf("dirty\n");
    mem_write(cache_tag[way2][idx]<<idx_width | idx, cache_data[way2][idx]);
    D[way2][idx] = 0;
  }
  mem_read(addr >> BLOCK_WIDTH, buf);
  uint32_t *p = (uint32_t *)(buf + offset);
  *p = (*p & ~wmask) | (data & wmask);
  for (int i = 0; i < line_size; i++)
  {
    cache_data[way2][idx][i] = buf[i];
  }
  cache_tag[way2][idx] = tag;
  
  V[way2][idx] = 1; 
#ifdef WRITE_THROUGH
  D[way2][idx] = 0;
  mem_write(addr >> BLOCK_WIDTH, buf);
#else
  D[way2][idx] = 1; 
#endif
}

void init_cache(int total_size_width, int associativity_width)
{
  offset_width = BLOCK_WIDTH;
  idx_width = total_size_width - associativity_width - offset_width;
  tag_width = ADDR_WIDTH - total_size_width + associativity_width;
  way = exp2(associativity_width);
  line = exp2(idx_width);
  line_size = exp2(offset_width);
  // init data array
  cache_data = malloc(way * sizeof(uint8_t **)); // way
  for (int i = 0; i < way; i++)
  {
    cache_data[i] = malloc(line * sizeof(uint8_t *)); // cache line
    for (int j = 0; j < line; j++)
    {
      cache_data[i][j] = malloc(line_size * sizeof(uint8_t)); // cache line size
    }
  }
  // init tag array
  cache_tag = malloc(way * sizeof(uint32_t *));
  for (int i = 0; i < way; i++)
  {
    cache_tag[i] = malloc(line * sizeof(uint32_t));
  }
  // init dirty
  D = malloc(way * sizeof(uint8_t *));
  for (int i = 0; i < way; i++)
  {
    D[i] = malloc(line * sizeof(uint8_t));
    for (int j = 0; j < line; j++)
      D[i][j] = 0;
  }
  // init valid
  V = malloc(way * sizeof(uint8_t *));
  for (int i = 0; i < way; i++)
  {
    V[i] = malloc(line * sizeof(uint8_t));
    for (int j = 0; j < line; j++)
      V[i][j] = 0;
  }
  // init buf
  buf = malloc(line_size * sizeof(uint8_t));
}

void display_statistic(void)
{
  printf("miss:%.10f\n", ((double)hit_cnt) / (hit_cnt+miss_cnt));
}
