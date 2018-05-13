#include <stdio.h>
#include <stdlib.h>

/*
- pas de ';' à la fin
- pas de '='
*/
#define A 2
#define B A + 1

/*
coller les arguments
mettre des parenthese pour les variable
*/
#define PLUS(X,Y) ((X)+(Y))
#define MOINS(X,Y) ((X)-(Y))


int main(void) {

	printf("%d %d\n", 5*PLUS(A,B), MOINS(A+1,B+1));

	return EXIT_SUCCESS;
}