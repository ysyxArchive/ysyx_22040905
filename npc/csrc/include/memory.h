#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "macro.h"

word_t paddr_read(paddr_t addr);
void paddr_write(paddr_t addr,word_t data);

word_t vaddr_ifetch(vaddr_t addr, int len);
word_t vaddr_read(vaddr_t addr, int len);
void vaddr_write(vaddr_t addr, int len, word_t data);

#endif