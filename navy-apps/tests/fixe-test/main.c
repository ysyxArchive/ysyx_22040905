#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <fixedptc.h>

int main() {
  //fixedpt_muli();fixedpt_divi();fixedpt_mul();fixedpt_div();fixedpt_abs();fixedpt_floor();fixedpt_ceil();
  fixedpt_muli(fixedpt_rconst(1.2),10);
  fixedpt_muli(fixedpt_rconst(-1.2),10);
  fixedpt_muli(fixedpt_rconst(0),5);
  return 0;
}
