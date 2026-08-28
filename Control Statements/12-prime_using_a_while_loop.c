#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 2 == 0)

    {

        if (count == 2)
        {
            printf("not prime");
        }
    }
    else
    {
        printf(" prime");
    }
    return 0;
}