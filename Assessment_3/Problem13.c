#include <stdio.h>
int main()
{
    int num, d1, d0;
    scanf("%d", &num);
    d0 = num % 10;       
    d1 = (num / 10) % 10; 
    if (d1 == d0)
        printf("Success");
    else
        printf("Failure");
    return 0;
}