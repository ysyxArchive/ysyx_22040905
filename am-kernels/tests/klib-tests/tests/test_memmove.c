#include "trap.h"

#define N 32
uint8_t data[N];
uint8_t data2[N];
void reset() {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
    data2[i] = i + 1;
  }
}
// 检查[l,r)区间中的值是否均为val
void check_eq(int l, int r, int k) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == data2[i+k]);
  }
}

void test_memmove() {
  int k ,l, r;
  for(k = 0; k < N; k ++){
    for (l = 0; l < N; l ++) {
      for (r = l + 1 -k; r>l&&r <= N -k; r ++) {
        reset();
        memmove(data+l, data+l+k, r - l);
        check_eq(l, r, k);
      }
    }
  }
}

int main() {
	test_memmove();

}
