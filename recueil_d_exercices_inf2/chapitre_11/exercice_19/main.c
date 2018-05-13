#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 3

void afficher … // Le code de la fonction afficher a volontairement été omis ici

int main(void) {
    int tab[SIZE] = {0};
    afficher(tab, SIZE);

    for (size_t i = 0; i < SIZE; ++i)
        tab[i]++; afficher(tab, SIZE);

    <à compléter>

    for (size_t i = 0; i < SIZE; ++i)
        tab[i] += 2;

    afficher(tab, SIZE);

    return EXIT_SUCCESS;
}