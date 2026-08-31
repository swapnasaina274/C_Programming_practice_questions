#include <stdio.h>

int main()
{
    int n, sum = 0, rem;
    printf("Enter a number");
    scanf("%d", &n);
    do
    {
        rem = n % 10;    // 987..7,8
        sum = rem + sum; // 7,15,24
        n = n / 10;      // 98,9

    } while (n != 0);
    printf("%d", sum);
    return 0;
}