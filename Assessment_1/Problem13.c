#include <stdio.h>
int main()
{
    int num, tens, ones, reverse;
    printf("Enter a two-digit number:");
    scanf("%d", &num);
    ones = num % 10;    
    tens = num / 10;   
    reverse = (ones * 10) + tens;
    printf("Reverse of the number: %d", reverse);
    return 0;
}