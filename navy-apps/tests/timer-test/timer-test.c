#include <sys/time.h>
#include <stdio.h>

int main() {
  struct timeval tv;
  struct timezone tz;
  gettimeofday(&tv,&tz);
  uint64_t us=tv.tv_usec;
  while (1) {
    if (tv.tv_usec-us>=500000) {
      printf("Hello World!\n");
      us=tv.tv_usec;
    }
  gettimeofday(&tv,&tz);
  }
  return 0;
}
