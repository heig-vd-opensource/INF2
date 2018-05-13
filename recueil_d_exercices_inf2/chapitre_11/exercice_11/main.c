#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void initialiser(int* ptr, size_t taille, int valeur) {
    assert(ptr != NULL);
    // 1)
    {
        for(int i=0; i < taille; ++i){
            ptr[i] = valeur;
        }
    }
    
    // 2)
    {
        for (int i = 0; i < taille; ++i) {
            *(ptr + i) = valeur;
        }    
    }
    
    // 3)
    {
        int* tmp = ptr;
        for (int i = 0; i < taille; ++tmp, ++i){
            *tmp = valeur;
        }    
    }
    // 4)
    {
        for (int* tmp = ptr; tmp < ptr + taille; ++tmp) {
            *tmp = valeur;
        }
    }
    // 5)
    {
        const int* const FIN = ptr + taille;
        int* tmp = ptr;
        while(tmp < FIN)
            *tmp++ = valeur;
    }
    // 6)
    {
        for (int i = 0; i < taille; ++i) {
            *ptr++ = valeur;
        }
    }
}

void initialiser_2(int* debut, int* fin, int valeur) {
    while(debut < fin)
        *debut++ = valeur;
}

int main(void) {
    
}