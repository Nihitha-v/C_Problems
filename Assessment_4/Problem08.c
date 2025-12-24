#include <stdio.h>
int main()
{
    int n = 10, a, b, sum;
    start:
    a = n / 10;     
    b = n % 10;      
    sum = a + b;
    if (sum == 6)
        printf("%d\n", n);
    n = n + 2;      
    if (n < 100)
        goto start;
    return 0;
}