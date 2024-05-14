// program to find the factorial of a number

#include <stdio.h>

int main() {
    int n, res = 1;
    printf("Enter the number to find the factorial: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        res *= i;
    }
    printf("%d", res);
    return 0;
}