#include <stdio.h>
#include <stdlib.h>

int main(){

	printf(" 1) %d\n", 22 | 11);   // 31
	printf(" 2) %d\n", 0 ^ 19);    // 19
	printf(" 3) %d\n", 2 << 3);    // 16
	printf(" 4) %d\n", 30 & 14);   // 14
	printf(" 5) %d\n", 8 >> 2);    // 2
	printf(" 6) %d\n", 4 & 29);    // 4
	printf(" 7) %d\n", 9 << 4);    // 144
	printf(" 8) %d\n", 31 ^ 27);   // 4
	printf(" 9) %d\n", 23 | 3);    // 23
	printf("10) %d\n", -1 >> 1);   // -1
	printf("11) %d\n", -5 >> 1);   // -3
	printf("12) %d\n", 3 & ~2);    // 1
	printf("13) %d\n", 6 | 5 & 4); // 6


	return EXIT_SUCCESS;
}

