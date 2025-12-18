#include <stdio.h>
int main()
{
    int num, d0, d1;
    scanf("%d", &num);
    d0 = num / 10;   
    d1 = num % 10;   
    if (d1 > d0)
        printf("1");
    else
        printf("0");
    return 0;
}