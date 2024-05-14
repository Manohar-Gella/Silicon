#include <stdio.h>

int main() {
    int f, s, k, sum;
    printf("Enter the number one: ");
    scanf("%d", &f);
    printf("Enter the number two: ");
    scanf("%d", &s);
    printf("Enter the max series expansion: ");
    scanf("%d", &k);
    for(int i = 0; i<k; i++){
        sum = f+s;
        printf(" %d %d - %d \n", f, s, sum);
        f = s;
        s = sum;

    }
    return 0;
}