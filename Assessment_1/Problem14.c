#include <stdio.h>
int main()
{
    int num, hundreds, tens, ones, reverse;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    ones = num % 10;             
    tens = (num / 10) % 10;        
    hundreds = num / 100;          
    reverse = (ones * 100) + (tens * 10) + hundreds;
    printf("Reverse of the number: %d", reverse);
    return 0;
}