#include <stdio.h>
int main()
{
    int n;
    int d0, d1, d2;
    scanf("%d", &n);
    d0 = n % 10;          
    d1 = (n / 10) % 10;    
    d2 = (n / 100) % 10;   
    if (d1 == d0 && d2 != d0)
        printf("1");
    else
        printf("0");
    return 0;
}