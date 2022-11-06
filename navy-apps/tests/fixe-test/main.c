#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <fixedptc.h>

int main() {
  fixedpt a = fixedpt_rconst(1.2);
  fixedpt b = fixedpt_fromint(10);
  print(a);
  int c = 0;
  if (b > fixedpt_rconst(7.9)) {
    c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
  }
  printf("c:%d\n",c);
  return 0;
}
