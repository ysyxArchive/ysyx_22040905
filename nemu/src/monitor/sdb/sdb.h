#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);

bool change();
void info_wp();
void set_wp(char * exp);
void del_wp(int id);
#endif
