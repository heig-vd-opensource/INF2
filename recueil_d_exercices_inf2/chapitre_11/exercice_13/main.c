#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 1, j = 2;
    int *p = &i, *q = &j;

    *p = (int)q;
    *q = (int)p;
    p = (int*)(*p);
    q = (int*)(*q);

    i = 3, j = 4;

    printf("*p = %d *q = %d\n", *p, *q);

    return EXIT_SUCCESS;
}