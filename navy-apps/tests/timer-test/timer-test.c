#include <NDL.h>
#include <stdio.h>

int main() {
  NDL_Init(0);
  uint32_t ms=NDL_GetTicks();
  int t=0; 
  while (1) {
    if (NDL_GetTicks()-ms>=500) {
      t+=1;
      printf("Hello World at the second %d.%d\n",t/2,(t%2)?5:0);
      ms=NDL_GetTicks() ;
    }
  }
  return 0;
}
