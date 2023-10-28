#include <memory/cache.h>
#include <memory/host.h>
#include <memory/paddr.h>

static uint64_t cycle_cnt = 0;
static uint64_t hit_cnt = 0;
static uint64_t miss_cnt = 0;

void cycle_increase(int n) { cycle_cnt += n; }

//uint8_t ***cache_data = NULL;
//uint8_t **D = NULL; // dirty
//word_t **cache_tag = NULL;
//uint8_t **V = NULL; // valid
uint8_t *buf = NULL;

#define offset_width  (BLOCK_WIDTH)
#define idx_width  (TOTAL_SIZE_WIDTH - ASSOCIATIVITY_WIDTH - offset_width)
#define tag_width  (ADDR_WIDTH - TOTAL_SIZE_WIDTH + ASSOCIATIVITY_WIDTH)
#define way  (exp2(ASSOCIATIVITY_WIDTH))
#define line  (exp2(idx_width))
#define line_size  (exp2(offset_width))

CacheLine cache[way][line];

int check_tag(int idx, int tag)
{
  for (int i = 0; i < way; i++)
  {
    if (cache[i][idx].tag == tag)
    {
      return i;
    }
  }
  return -1;
}


word_t cache_read(uintptr_t addr,size_t len)
{
  word_t offset = BITS(addr, offset_width - 1, 0);
  word_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
  word_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
  for (int i = 0; i < way; i++)
  {
    if (cache[i][idx].tag == tag && cache[i][idx].valid)
    { // hit
      hit_cnt++;
      assert(offset+len<=BLOCK_SIZE);
      return host_read(cache[i][idx].data + offset,len);
    }
  }
  // miss
  // Replacement algorithm: random
  miss_cnt++;
  int way2 = rand() % way;

  for(int i=0;i<BLOCK_SIZE/8;i++){
    host_write(buf+(i*8),8,pmem_read( ((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH) | (i*8),8));
  }

  for (int i = 0; i < BLOCK_SIZE; i++){
    cache[way2][idx].data[i] = buf[i];
  }
  cache[way2][idx].tag = tag;
  cache[way2][idx].valid = 1;
  assert(offset+len<=BLOCK_SIZE);
  return host_read(cache[way2][idx].data+ offset,len);
}

void cache_write(uintptr_t addr, size_t len, word_t data)
{
  word_t offset = BITS(addr, offset_width - 1, 0);
  word_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
  word_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
  for (int i = 0; i < way; i++)
  {
    if (cache[i][idx].tag == tag && cache[i][idx].valid)
    { // hit
      hit_cnt++;
      assert(offset+len<=BLOCK_SIZE);
      host_write(cache[i][idx].data + offset,len,data);
      pmem_write(addr, len, data);
      return;
    }
  }
  // miss
  // Replacement algorithm: random
  miss_cnt++;

  pmem_write(addr, len, data);
}

void init_cache()
{

  // init data array
  for(int i=0;i<way;i++){
    for(int j=0;j<line;j++)
      cache[i][j].valid=0;
  }
  buf = malloc(line_size * sizeof(uint8_t));
}

void display_statistic(void)
{
  printf("miss:%.10f\n", ((double)hit_cnt) / (hit_cnt+miss_cnt));
}
