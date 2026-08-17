#include <stdio.h>

int main()
{
    int num, n, result;
    printf("Enter the number:");
    scanf("%d", &num);

    printf("Enter bit position:");
    scanf("%d", &n);

    result = num ^ (1 << n);
    printf("Result:%d", result);
    return 0;
}