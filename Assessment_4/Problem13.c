#include <stdio.h>
int main()
{
    int n, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
START:
    if (n != 0)
    {
        digit = n % 10;  
        rev = (rev * 10) + digit;
        n = n / 10;              
        goto START;              
    }
    printf("Reverse = %d", rev);
    return 0;
}