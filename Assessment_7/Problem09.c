#include<stdio.h>
void disp_2digit_ones5(int);
int main()
{
    int x;
    scanf("%d",&x);
    disp_2digit_ones5(x);
}
void disp_2digit_ones5(int x)
{
    int i,digit,sum;
    sum = 0;
    i = x;
    while(i<=99)
    {
        digit = i % 10;
        if(digit == 5)
        {
           sum = sum + i;
        }
        i = i + 1;
    }
    printf("%d",sum);
}