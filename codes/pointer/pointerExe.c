// example program to understand to know how do pointers work..

#include <stdio.h>

int main() {

    int x = 5;
    int *y = &x; // storing or pointing the value and address of 'x' variable and also has it's own address
    printf("%d \n", x); // prints out the vlaue of x
    printf("%u \n", &x);
    printf("%u \n", y);
    printf("%d \n", *y);
    printf("%u \n", &y);

    return 0;
}