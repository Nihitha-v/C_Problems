#include <stdio.h>
int main()
{
    int n, temp, first, last, digits = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;   
    temp = n;
START:
    if (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
        goto START;
    }
    first = temp;  
    result = (last * digits) + (n % digits);
    result = result - last;
    result = result + first;
    printf("Result = %d", result);
    return 0;
}