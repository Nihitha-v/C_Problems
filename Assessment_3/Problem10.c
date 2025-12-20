#include <stdio.h>
int main()
{
    int num, d0, d1;
    scanf("%d", &num);
    d1 = num % 10;       
    d0 = num / 10;        
    if (d0 < d1)
        printf("Success");
    else
        printf("Failure");
    return 0;
}