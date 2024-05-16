// gate 2010 pyq

#include <stdio.h>

int f(int *p, int *q) {
    p = q;
    printf("%d \n", p);
    printf("%d \n", q);

    *p = 2;
}

int i = 0, j= 1;

int main() {
    f(&i, &j);
    printf("%d %d \n", i, j);
    return 0;
}