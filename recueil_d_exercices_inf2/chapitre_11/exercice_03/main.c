#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* carres(const int tab[]);

int main(void) {
	int tab[] = {1, 2, 3};
	const size_t N = sizeof(tab) / sizeof(int);
	int* ptr = carres(tab);

	for (size_t i = 0; i < N; ++i)
		printf("%d ", ptr[i]); printf("\n");

	return EXIT_SUCCESS;
}


int* carres(const int tab[]) {
	// pas dans le scope de déclaration, mettre taille en parametre
	const size_t N = sizeof(tab) / sizeof(int);  
	int copie[N];
	memcpy(copie, tab, N * sizeof(int));

	for (size_t i = 0; i < N; ++i)
		copie[i] *= copie[i];

	return copie;  // ! désallocation mémoire
}