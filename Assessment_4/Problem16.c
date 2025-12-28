#include <stdio.h>
int main()
{
    int n, i = 2, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        flag = 0;
        goto RESULT;
    }
CHECK:
    if (i < n)
    {
        if (n % i == 0)
        {
            flag = 0;
            goto RESULT;
        }
        i = i + 1;
        goto CHECK;
    }
RESULT:
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}