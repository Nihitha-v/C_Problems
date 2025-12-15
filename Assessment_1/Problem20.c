#include <stdio.h>
int main()
{
    int num, hundreds, ones, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    hundreds = num / 100;
    ones = num % 10;
    result = (hundreds * 100) + ones;
    printf("Result: %d", result);
    return 0;
}