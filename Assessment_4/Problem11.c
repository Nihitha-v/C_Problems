#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
start:
    n = n / 10;
    count = count + 1;
    if (n > 0)
        goto start;
    printf("%d", count);
    return 0;
}