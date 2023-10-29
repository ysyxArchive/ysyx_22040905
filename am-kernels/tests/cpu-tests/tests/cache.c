#include "trap.h"


int test_data[] = {-1, 0, 49, 50, 51, 99, 100, 101, 299, 300, 301, 499, 500, 501};
int ans_data[] = {-1, 0, 49, 50, 51, 99, 100, 101, 299, 300, 301, 499, 500, 501};

#define NR_DATA LENGTH(test_data)

volatile int main() {

	int i=0;
	for(i = 0; i < NR_DATA; i ++) {
		check(test_data[i] == ans_data[i]);
		check(test_data[i] == ans_data[i]);
	}

	for(i = 0; i < NR_DATA; i ++) {
		test_data[i]=test_data[i]+1;
		test_data[i]=test_data[i]+1;
		ans_data[i]=ans_data[i]+2;
	}
	for(i = 0; i < NR_DATA; i ++) {
		check(test_data[i] == ans_data[i]);
		check(test_data[i] == ans_data[i]);
	}


	check(i == NR_DATA);

	return 0;
}
