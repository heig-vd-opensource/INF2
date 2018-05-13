#include <stdlib.h>
#include <stdio.h>

int main(void) {
	const char* c[] = {"elle", "mangera", "une", "petite", "tomme"};
	const char** d[] = {c+1, c+2, c+3, c+4, c};
	const char*** e = &d[3];

	c[3][0]
	(**d)[5]
	(**e)[*d-c]
	(d[3]-3)[0][3]
	**d + 5
	*d[3] + 2
	*(*e[-3] + 5)
	**c
	e[0][0][e-d]+1
	0[c][0] - 'd' + 'B'
}
