#include <NDL.h>
#include <stdio.h>

int main() {
  NDL_Init(0);
  uint32_t ms=NDL_GetTicks(); 
  while (1) {
    if (NDL_GetTicks()-ms>=1000000) {
      printf("Hello World!\n");
      ms=NDL_GetTicks() ;
    }
  }
  return 0;
}
