#include <stdio.h>
int main()
{
    int num, tens, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    tens = (num / 10) % 10;
    result = num - (tens % 2) * 5;
    printf("Output: %d", result);
    return 0;
}