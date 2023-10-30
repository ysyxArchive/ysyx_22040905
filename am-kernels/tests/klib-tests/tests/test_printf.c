#include "trap.h"

int main() {
	printf("%s", "Hello world!\n");

	printf("Hello world!\n");

	printf("%d + %d = %d\n", 1, 1, 2);

	printf("%d + %d = %d\n", 2, 10, 12);

	printf("%d + %d = %s\n", 2, 10, "12");
	
	printf("%d + %ld = %lld\n", 2, 10, 12);

	char b[10]="12";
	printf("%d + %d = %s\n", 2, 10, b);

	printf("%d + %d = %c%c\n", 2, 10, b[0],b[1]);

	printf("%d=0x%x=0%o=0b%b\n",16,0x10,0100,0b10000);

	printf("%d%%\n",888);
	return 0;
}
