#include <stdio.h>

int swap(int *x, int *y);

int main() {
    int x, y;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swaing the values are: %d %d", x, y);
    return 0;
}


int swap(int *x, int *y){
    int c = 0;
    c = *x;
    *x = *y;
    *y = c;
}