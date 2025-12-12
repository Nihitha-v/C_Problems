#include<stdio.h>
int main()
{
    int a, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    result = a % 8;   
    printf("Result:%d",result);
    return 0;
}