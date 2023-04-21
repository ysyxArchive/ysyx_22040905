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
  //printf("%lx %lx %lx %lx\n",addr,tag,idx,offset);
  for (int i = 0; i < way; i++)
  {
    if (cache[i][idx].tag == tag && cache[i][idx].valid)
    { // hit
      hit_cnt++;
      //printf("hit_cnt:%ld\n",hit_cnt);
      assert(offset+len<=BLOCK_SIZE);
      return host_read(cache[i][idx].data + offset,len);
    }
  }
  // miss
  // Replacement algorithm: random
  miss_cnt++;
  int way2 = rand() % way;
  //// dirty
  //if (D[way2][idx])
  //{
  //  //printf("d\n");
  //  for(int i=0;i<BLOCK_SIZE/8;i++)
  //      pmem_write((((cache_tag[way2][idx]<<idx_width) |idx)<<offset_width) | (i*8),8,*(cache_data[way2][idx]+(i*8)));
  //  D[way2][idx] = 0;
  //}//else printf("ud\n");

  for(int i=0;i<BLOCK_SIZE/8;i++){
    host_write(buf+(i*8),8,pmem_read( ((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH) | (i*8),8));
  }

  for (int i = 0; i < BLOCK_SIZE; i++){
    cache[way2][idx].data[i] = buf[i];
  }
  cache[way2][idx].tag = tag;
  cache[way2][idx].valid = 1;
    //printf("addr:%lx len:%lx addr:%lx %lx addr:%lx %lx\n",addr,len,(addr>> BLOCK_WIDTH)<< BLOCK_WIDTH,pmem_read( ((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH),8),((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH )|8,pmem_read( ((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH) | 8,8));
    //printf("%lx %lx\n",*(word_t *)(cache_data[way2][idx]),*(word_t *)(cache_data[way2][idx] + 8));
    //printf("%lx\n",host_read(cache_data[way2][idx] + offset,len));
  assert(offset+len<=BLOCK_SIZE);
  return host_read(cache[way2][idx].data+ offset,len);
}

void cache_write(uintptr_t addr, size_t len, word_t data)
{
  word_t offset = BITS(addr, offset_width - 1, 0);
  word_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
  word_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
  // printf("%lx %x %x %x\n",addr,tag,idx,offset);
  for (int i = 0; i < way; i++)
  {
    if (cache[i][idx].tag == tag && cache[i][idx].valid)
    { // hit
      hit_cnt++;
      //printf("hit\n");
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
//// dirty
//if (D[way2][idx]){
//  //printf("dirty\n");
//  for(int i=0;i<BLOCK_SIZE/8;i++)
//      pmem_write(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (i*8),8,*(cache_data[way2][idx]+(i*8)));
//  D[way2][idx] = 0;
// }//else printf("ud\n");
//
//    for(int i=0;i<BLOCK_SIZE/8;i++)
//        host_write(buf+(i*8),8,pmem_read(((addr>> BLOCK_WIDTH)<< BLOCK_WIDTH)| (i*8),8));
//
//    assert(offset+len<=BLOCK_SIZE);
//    host_write(buf+offset,len,data);
//
//    for (int i = 0; i < line_size; i++){
//        cache_data[way2][idx][i] = buf[i];
//    }
//    //printf("%lx %lx\n",*(word_t *)(cache_data[way2][idx]),*(word_t *)(cache_data[way2][idx]+ 8));
//
//    cache_tag[way2][idx] = tag;
//
//    V[way2][idx] = 1;
//    D[way2][idx] = 1; 
}

void init_cache()
{

  // init data array
  for(int i=0;i<way;i++){
    for(int j=0;j<line;j++)
      cache[i][j].valid=0;
  }
  //cache_data = malloc(way * sizeof(uint8_t **)); // way
  //for (int i = 0; i < way; i++)
  //{
  //  cache_data[i] = malloc(line * sizeof(uint8_t *)); // cache line
  //  for (int j = 0; j < line; j++)
  //  {
  //    cache_data[i][j] = malloc(line_size * sizeof(uint8_t)); // cache line size
  //  }
  //}
  //// init tag array
  //cache_tag = malloc(way * sizeof(word_t ));
  //for (int i = 0; i < way; i++)
  //{
  //  cache_tag[i] = malloc(line * sizeof(word_t));
  //}
  //// init dirty
  //D = malloc(way * sizeof(uint8_t *));
  //for (int i = 0; i < way; i++)
  //{
  //  D[i] = malloc(line * sizeof(uint8_t));
  //  for (int j = 0; j < line; j++)
  //    D[i][j] = 0;
  //}
  //// init valid
  //V = malloc(way * sizeof(uint8_t *));
  //for (int i = 0; i < way; i++)
  //{
  //  V[i] = malloc(line * sizeof(uint8_t));
  //  for (int j = 0; j < line; j++)
  //    V[i][j] = 0;
  //}
  // init buf
  buf = malloc(line_size * sizeof(uint8_t));
}

void display_statistic(void)
{
  printf("miss:%.10f\n", ((double)hit_cnt) / (hit_cnt+miss_cnt));
}
