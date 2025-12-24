#include <stdio.h>
int main()
{
    int i = 6, sum = 0;
start:
    sum = sum + i;
    i = i - 1;
    if (i >= 1)
        goto start;
    printf("%d", sum);
    return 0;
}