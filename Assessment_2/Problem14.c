#include <stdio.h>
int main()
{
    int num, first2, last2;
    scanf("%d", &num);
    first2 = num / 100;   
    last2  = num % 100;  
    if (first2 == last2)
        printf("1");
    else
        printf("0");
    return 0;
}