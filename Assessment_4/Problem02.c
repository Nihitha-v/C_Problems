#include <stdio.h>
int main()
{
    int i = 5;
start:
    printf("%d\n", i);
    i = i-1;
    if (i >= 1)
        goto start;
    return 0;
}