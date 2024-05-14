#include <stdio.h>

int main() {
    int num, originalNumber, reminder, n = 0, result = 0;
    printf("Enter any number: ");
    scanf("%d", &num);
    originalNumber = num;
    while (originalNumber!=0)
    {
        reminder = originalNumber % 10;
        result = result*10+reminder;
        originalNumber /=10;
    }
    if(result == num){
        printf("Plaindrome spotted");
    }
    else{
        printf("Shut the fuckup bro");
    }
    return 0;
}