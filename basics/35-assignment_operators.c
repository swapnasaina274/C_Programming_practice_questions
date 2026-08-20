#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a number:");
    scanf("%d", &a);
    b = a; //b=7
    printf("Value of b is:%d\n", b);
    b += a; //b=b+a //b=7+7=14
    printf("Value of b is:%d\n", b);
    b -= a; //b=b-a //b=14-7=7
    printf("Value of b is:%d\n", b);
    b *= a; //b=b*a //b=7*7=49
    printf("Value of b is:%d\n", b);
    b /= a; //b=b/a //b=49/7=7
    printf("Value of b is:%d\n", b);

    return 0;
}