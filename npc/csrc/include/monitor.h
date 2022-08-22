#ifndef __MONITOR_H__
#define __MONITOR_H__

#include "macro.h"

uint64_t expr(char *e, bool *success);

bool change();
void info_wp();
void set_wp(char * exp);
void del_wp(int id);
#endif
