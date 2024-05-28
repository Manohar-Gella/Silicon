#include <stdio.h>
// array is contiguos memory with contiguos memory adresses
int main() {
    int nums[5] = {0, 1, 2, 3, 4};
    int *p = &nums[0];
    printf("%d \n", *p);
    p = p+2;
    printf("%d \n", *p);
    printf("%d \n", nums[2]);

}