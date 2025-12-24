#include <stdio.h>
int main()
{
    int n = 71, sum = 0;
start:
    sum = sum + n;
    n = n + 2;        
    if (n <= 79)
        goto start;
    printf("%d", sum);
    return 0;
}