#include <stdio.h>
#include <stdlib.h>

#define A 1
#define B 2
#define AB 3
#define F(X,Y) X##Y

int main(void) {
	int n = AB;

	printf("%d\n", n);
	printf("%s\n", "AB");
	printf("%d\n", F(A, B));

	return EXIT_SUCCESS;
}