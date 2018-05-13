#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define INT_SIZE sizeof(int) * 8

typedef unsigned short ushort;

ushort getBit(ushort pos, int n);

int main(void) {
	
	for (ushort pos = 0; pos < INT_SIZE; ++pos)
		printf("bit %hu = %hu\n", pos, getBit(pos, 10));
	
	return EXIT_SUCCESS;
}

ushort getBit(ushort pos, int n) {
	assert(pos < INT_SIZE);
	return n >> pos & 1; // ou (n >> pos) & 1
}