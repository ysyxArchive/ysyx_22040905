//#ifndef __CACHE_H__
//#define __CACHE_H__
//
//#include <common.h>
//
//#define exp2(x) (1 << (x))
//#define ADDR_WIDTH 32
//#define BLOCK_WIDTH 4 //16B
//#define BLOCK_SIZE exp2(BLOCK_WIDTH)
//#define ASSOCIATIVITY_WIDTH 1  
//#define ASSOCIATIVITY_SIZE exp2(ASSOCIATIVITY_WIDTH)
//#define TOTAL_SIZE_WIDTH 12
//#define IDX_WIDTH TOTAL_SIZE_WIDTH-BLOCK_WIDTH-ASSOCIATIVITY_WIDTH
//#define TAG_WIDTH ADDR_WIDTH-BLOCK_SIZE-IDX_WIDTH
//#define LINE_WIDTH TOTAL_SIZE_WIDTH-BLOCK_WIDTH
//#define LINE_SIZE exp2(1<<LINE_WIDTH)
//
////struct CacheLine{
////    int valid;
////    unsigned long long tag;
////    unsigned long long data;
////};
//
//word_t cache_read(uintptr_t addr,size_t len);
//void cache_write(uintptr_t addr, size_t len, word_t data);
//void init_cache();
//void display_statistic(void);
//
//#endif
