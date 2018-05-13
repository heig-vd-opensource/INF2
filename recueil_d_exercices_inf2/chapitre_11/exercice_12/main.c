#include <stdio.h>
#include <stdlib.h>

void inverser(int* debut, int* fin) {
    while(debut < fin){
        int tamp = *debut;
        *debut++ = *fin;
        *fin-- = tamp;
    }
}


int main(void) {



    return EXIT_SUCCESS;
}