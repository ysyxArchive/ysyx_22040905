#ifndef __MACRO_H__
#define __MACRO_H__

#define paddr_t u_int32_t
#define word_t u_int64_t
#define vaddr_t word_t

#define CONFIG_MSIZE 32768
#define CONFIG_MBASE 0x80000000

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#endif