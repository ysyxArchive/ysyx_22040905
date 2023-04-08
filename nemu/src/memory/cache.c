//#include <memory/cache.h>
//#include <memory/host.h>
//#include <memory/paddr.h>
//
//static uint64_t cycle_cnt = 0;
//static uint64_t hit_cnt = 0;
//static uint64_t miss_cnt = 0;
//
//void cycle_increase(int n) { cycle_cnt += n; }
//
//uint8_t ***cache_data = NULL;
//uint8_t **D = NULL; // dirty
//uint32_t **cache_tag = NULL;
//uint8_t **V = NULL; // valid
//uint8_t *buf = NULL;
//
//int tag_width = 0, idx_width = 0, offset_width = 0;
//int way, line, line_size;
//
//
//int check_tag(int idx, int tag)
//{
//  for (int i = 0; i < way; i++)
//  {
//    if (cache_tag[i][idx] == tag)
//    {
//      return i;
//    }
//  }
//  return -1;
//}
//
//
//word_t cache_read(uintptr_t addr,size_t len)
//{
//  uint32_t offset = BITS(addr, offset_width - 1, 0);
//  uint32_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
//  uint32_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
//  // printf("%lx %x %x %x\n",addr,tag,idx,offset);
//  for (int i = 0; i < way; i++)
//  {
//    if (cache_tag[i][idx] == tag && V[i][idx])
//    { // hit
//      hit_cnt++;
//      //printf("hit_cnt:%ld\t",hit_cnt);
//      //printf("%lx\t%08x\n",addr & ~0x3,(*(uint32_t *)(cache_data[i][idx] + offset)));
//      return host_read(cache_data[i][idx] + offset,len);
//    }
//  }
//  // miss
//  // Replacement algorithm: random
//  miss_cnt++;
//  int way2 = rand() % way;
//  // dirty
//  if (D[way2][idx])
//  {
//    //printf("d\n");
//    for(int i=0;i<BLOCK_SIZE/8;i++)
//        pmem_write(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (i*8),8,*(cache_data[way2][idx]+(i*8)));
//    if(BLOCK_SIZE%8!=0) 
//        pmem_write(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (BLOCK_SIZE/8*8),BLOCK_SIZE%8,*(cache_data[way2][idx]+(BLOCK_SIZE/8*8)));
//    D[way2][idx] = 0;
//  }
//
//  for(int i=0;i<BLOCK_SIZE/8;i++)
//      host_write(buf+(i*8),8,pmem_read(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (i*8),8));
//  if(BLOCK_SIZE%8!=0) 
//      host_write(buf+(BLOCK_SIZE/8*8),BLOCK_SIZE%8,pmem_read(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (BLOCK_SIZE/8*8),BLOCK_SIZE%8));
//
//  for (int i = 0; i < line_size; i++)
//  {
//    cache_data[way2][idx][i] = buf[i];
//  }
//  cache_tag[way2][idx] = tag;
//  V[way2][idx] = 1;
//  return *(word_t *)(cache_data[way2][idx] + offset);
//}
//
//void cache_write(uintptr_t addr, size_t len, word_t data)
//{
//  uint32_t offset = BITS(addr, offset_width - 1, 0);
//  uint32_t idx = BITS(addr, offset_width + idx_width - 1, offset_width);
//  uint32_t tag = BITS(addr, ADDR_WIDTH - 1, offset_width + idx_width);
//  int l=len;
//  word_t wmask=0;
//  while(l){
//    wmask=(wmask<<8)|(0b11111111); 
//    l--;
//  }
//  // printf("%lx %x %x %x\n",addr,tag,idx,offset);
//  for (int i = 0; i < way; i++)
//  {
//    if (cache_tag[i][idx] == tag && V[i][idx])
//    { // hit
//      hit_cnt++;
//      //printf("hit\n");
//      word_t *p = (word_t *)(cache_data[i][idx] + offset);
//      *p = (*p & ~wmask) | (data & wmask);
//      D[i][idx] = 1;
//      return;
//    }
//  }
//  // miss
//  // Replacement algorithm: random
//  miss_cnt++;
//  int way2 = rand() % way;
//  // dirty
//  if (D[way2][idx])
//  {
//    //printf("dirty\n");
//    for(int i=0;i<BLOCK_SIZE/8;i++)
//        pmem_write(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (i*8),8,*(cache_data[way2][idx]+(i*8)));
//    if(BLOCK_SIZE%8!=0) 
//        pmem_write(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (BLOCK_SIZE/8*8),BLOCK_SIZE%8,*(cache_data[way2][idx]+(BLOCK_SIZE/8*8)));
//    D[way2][idx] = 0;
//  }
//
//  for(int i=0;i<BLOCK_SIZE/8;i++)
//      host_write(buf+(i*8),8,pmem_read(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (i*8),8));
//  if(BLOCK_SIZE%8!=0) 
//      host_write(buf+(BLOCK_SIZE/8*8),BLOCK_SIZE%8,pmem_read(((cache_tag[way2][idx]<<idx_width |idx)<<offset_width) | (BLOCK_SIZE/8*8),BLOCK_SIZE%8));
//
//    host_write(buf+offset,len,data);
//
//  for (int i = 0; i < line_size; i++)
//  {
//    cache_data[way2][idx][i] = buf[i];
//  }
//  cache_tag[way2][idx] = tag;
//
//  D[way2][idx] = 1; 
//}
//
//void init_cache()
//{
//  offset_width = BLOCK_WIDTH;
//  idx_width = TOTAL_SIZE_WIDTH - ASSOCIATIVITY_WIDTH - offset_width;
//  tag_width = ADDR_WIDTH - TOTAL_SIZE_WIDTH + ASSOCIATIVITY_WIDTH;
//  way = exp2(ASSOCIATIVITY_WIDTH);
//  line = exp2(idx_width);
//  line_size = exp2(offset_width);
//  // init data array
//  cache_data = malloc(way * sizeof(uint8_t **)); // way
//  for (int i = 0; i < way; i++)
//  {
//    cache_data[i] = malloc(line * sizeof(uint8_t *)); // cache line
//    for (int j = 0; j < line; j++)
//    {
//      cache_data[i][j] = malloc(line_size * sizeof(uint8_t)); // cache line size
//    }
//  }
//  // init tag array
//  cache_tag = malloc(way * sizeof(uint32_t *));
//  for (int i = 0; i < way; i++)
//  {
//    cache_tag[i] = malloc(line * sizeof(uint32_t));
//  }
//  // init dirty
//  D = malloc(way * sizeof(uint8_t *));
//  for (int i = 0; i < way; i++)
//  {
//    D[i] = malloc(line * sizeof(uint8_t));
//    for (int j = 0; j < line; j++)
//      D[i][j] = 0;
//  }
//  // init valid
//  V = malloc(way * sizeof(uint8_t *));
//  for (int i = 0; i < way; i++)
//  {
//    V[i] = malloc(line * sizeof(uint8_t));
//    for (int j = 0; j < line; j++)
//      V[i][j] = 0;
//  }
//  // init buf
//  buf = malloc(line_size * sizeof(uint8_t));
//}
//
//void display_statistic(void)
//{
//  printf("miss:%.10f\n", ((double)hit_cnt) / (hit_cnt+miss_cnt));
//}
//