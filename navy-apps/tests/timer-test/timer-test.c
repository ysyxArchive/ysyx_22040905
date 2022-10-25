#include <NDL.h>
#include <stdio.h>

int main() {
  NDL_Init(0);
  uint32_t us=NDL_GetTicks(); 
  while (1) {
    if (NDL_GetTicks()-us>=500000) {
      printf("Hello World!\n");
      us=NDL_GetTicks() ;
    }
  }
  return 0;
}
