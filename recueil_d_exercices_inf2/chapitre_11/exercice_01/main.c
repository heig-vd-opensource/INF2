#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// 1)
	int n = 1;
	// 2)
	int* ptr = &n;
	// 3)
	printf("%d\n",*ptr);
	// 4)
	printf("0x%d\n", &n);
	// 5)
	printf("%p\n", ptr);

}