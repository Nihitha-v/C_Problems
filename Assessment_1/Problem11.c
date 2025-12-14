#include <stdio.h>
int main()
{
    int num, tens, ones, sum;    
    printf("Enter a two-digit number:");
    scanf("%d", &num);
    ones = num % 10;     
    tens = num / 10;    
    sum = tens + ones;
    printf("Sum of digits: %d", sum);
    return 0;
}