#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = num - (num % 2)*5;
    printf("Output: %d", result);
    return 0;
}