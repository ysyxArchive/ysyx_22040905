#include "trap.h"

#define N 100
int a[N];
int main() {
  int i;
  for(i = 0; i < N; i ++)
    a[i] = i;

  int rem = 0; 
  for(i = 0; i < N; i ++){
    check(a[i]%10 == (rem++));
    if(rem == 10) rem-=10;
  }

  return 0;
}
