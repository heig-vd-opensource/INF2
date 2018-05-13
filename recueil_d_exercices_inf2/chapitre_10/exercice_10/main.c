#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 255;
	double x = 12.345;

	printf("%i\n", n + x);
	printf("%d\n", n);
	printf("+###%d\n", n);
	printf("%d\n", x);
	printf("%g\n", x);
	printf("%10.5f\n", x);

	return EXIT_SUCCESS;
}