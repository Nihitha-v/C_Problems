#include <stdio.h>
int main()
{
    int num, firstTwo, lastTwo;
    int a, b, revFirstTwo, result;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);
    firstTwo = num / 100;   
    lastTwo = num % 100;    
    a = firstTwo / 10;      
    b = firstTwo % 10;     
    revFirstTwo = (b * 10) + a;
    result = (revFirstTwo * 100) + lastTwo;
    printf("Result: %d", result);
    return 0;
}