#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }

    printf("Sum of the even numbers:%d\n", sum);
    return 0;
}