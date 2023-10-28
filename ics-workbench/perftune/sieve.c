#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

#define N 10000000

static bool is_prime[N];
static int  primes[N];
static int cnt;

int *sieve(int n) {
  assert(n + 1 < N);
  for (int i = 0; i <= n; i++)
    is_prime[i] = true;

  for (int i = 2; i <= n; i++) {
	if (is_prime[i]) {
	    primes[++cnt]=i;
   	 }
	for (int j =1; j <= cnt && i * primes[j]<=n; j++) {
      	is_prime[i*primes[j]] = false;
	if(i%primes[j]==0) break;
   	}
  }
  primes[cnt]=0;

  return primes;
}
