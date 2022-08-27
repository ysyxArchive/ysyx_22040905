#IFNDEF __REF_H__
#define __REF_H__
#include <npc/csrc/all.h>

void difftest_regcpy(void *dut, bool direction);
void difftest_exec(uint64_t n);
void difftest_raise_intr(uint64_t NO);
void difftest_init(int port);