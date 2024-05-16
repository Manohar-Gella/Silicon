// cutom pow function

#include <stdio.h>

int power(int num, int power) {
    int res = 1;
    for(int i = 0; i<power; i++){
        res *= num;
    }
    return res;
}

int main() {
    int x, y, res;
    printf("Enter value of number: ");
    scanf("%d", &x);
    printf("Enter value of power: ");
    scanf("%d", &y);
    res = power(x, y);
    printf("%d^%d = %d", x, y, res);
    return 0;
}