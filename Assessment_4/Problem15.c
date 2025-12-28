#include <stdio.h>
int main()
{
    int n, last, first, temp, power = 1, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    temp = n;
START:
    if (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
        goto START;
    }
    first = temp;
    if (last % 2 == 0)
    {
        result = n;
    }
    else
    {
        result = n - power;   
    }
    printf("Output = %d", result);
    return 0;
}