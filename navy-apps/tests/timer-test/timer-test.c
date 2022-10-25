#include <NDL.h>
#include <stdio.h>

int main() {
  NDL_Init(0);
  uint32_t ms=NDL_GetTicks();
  double t=0; 
  while (1) {
    if (NDL_GetTicks()-ms>=1000000) {
      t+=0.5;
      printf("Hello World at the second %.1f\n",t);
      ms=NDL_GetTicks() ;
    }
  }
  return 0;
}
