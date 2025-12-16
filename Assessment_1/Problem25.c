#include <stdio.h>
int main()
{
    int num, h, t, o;
    int sum1, sum2, result;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    h = num / 100;
    t = (num / 10) % 10;
    o = num % 10;
    sum1 = h + t + o;
    sum2 = (sum1 / 10) + (sum1 % 10);
    result = (sum2 / 10) + (sum2 % 10);
    printf("Output: %d", result);
    return 0;
}