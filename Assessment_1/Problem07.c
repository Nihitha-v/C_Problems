#include <stdio.h>
int main()
{
    int num, Tens;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    Tens = num / 10;   
    printf("Ten's digit: %d", Tens);
    return 0;
}