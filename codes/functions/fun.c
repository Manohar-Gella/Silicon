#include <stdio.h>

void maximum(int a, int b) {
    if(a>b){
        printf("%d is greater", a);
    }else{
        printf("%d is greater", b);
    }

}

int main(void) {
    int a, b, max;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    maximum(a, b);
    return 0;
}