#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    result = 10 + (num % 10);
    printf("Result: %d", result);
    return 0;
}