#include <time.h>
#include "../all.h"

static uint64_t boot_time = 0;

struct timespec now;
uint64_t get_time() {
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  uint64_t us = now.tv_sec * 1000000 + now.tv_nsec / 1000;
  return us - boot_time;
}

void init_time(){  
  clock_gettime(CLOCK_MONOTONIC_COARSE, &now);
  boot_time = now.tv_sec * 1000000 + now.tv_nsec / 1000;
}
