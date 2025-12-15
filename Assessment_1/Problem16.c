#include <stdio.h>

int main()
{
    int num, firstTwo, lastTwo, tens, ones, reversedLastTwo, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    firstTwo = num / 100;
    lastTwo = num % 100;
    tens = lastTwo / 10;
    ones = lastTwo % 10;
    reversedLastTwo = (ones * 10) + tens;
    result = (firstTwo * 100) + reversedLastTwo;
    printf("Result: %d", result);
    return 0;
}