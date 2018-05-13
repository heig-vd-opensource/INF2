#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t[6], i, *p;

	for (p = &t[5]; p > &t[-1]; p--)
		*p = (int) (p - t);

	for (i = 0; i < 6; i++)
		printf("%d ", t[i]);

	printf("\n");

	for (i = 0, ++p; i < 6; i++)
		printf("%d ", *p++/2);

	printf("\n");

	return EXIT_SUCCESS;
 }