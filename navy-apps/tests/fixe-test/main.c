#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <fixedptc.h>

int main() {
  //fixedpt_muli();fixedpt_divi();fixedpt_mul();fixedpt_div();fixedpt_abs();fixedpt_floor();fixedpt_ceil();
  fixedpt_muli(fixedpt_rconst(1.2),10);
  fixedpt_muli(fixedpt_rconst(-1.2),10);
  fixedpt_muli(fixedpt_rconst(0),5);
  printf("\n");
  fixedpt_divi(fixedpt_rconst(4.8),2);
  fixedpt_divi(fixedpt_rconst(2),5);
  fixedpt_divi(fixedpt_rconst(4.8),-2);
  fixedpt_divi(fixedpt_rconst(-2),5);
  fixedpt_divi(fixedpt_rconst(0),-2);
  printf("\n");
  fixedpt_mul(fixedpt_rconst(1.2),fixedpt_rconst(1.2));
  fixedpt_mul(fixedpt_rconst(-1.2),fixedpt_rconst(1.2));
  fixedpt_mul(fixedpt_rconst(-1.2),fixedpt_rconst(-1.2));
  fixedpt_mul(fixedpt_rconst(0),fixedpt_rconst(0));
  printf("\n");
  fixedpt_div(fixedpt_rconst(4.8),fixedpt_rconst(2));
  fixedpt_div(fixedpt_rconst(2),fixedpt_rconst(5));
  fixedpt_div(fixedpt_rconst(4.8),fixedpt_rconst(-2));
  fixedpt_div(fixedpt_rconst(-2),fixedpt_rconst(5));
  fixedpt_div(fixedpt_rconst(0),fixedpt_rconst(-2));
  printf("\n");

  return 0;
}
