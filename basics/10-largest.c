#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    (a >= b && a >= c) ? printf("a is largest") : (b >= a && b >= c) ? printf("b is largest")
                                                                     : printf("c is largest");
    return 0;
}