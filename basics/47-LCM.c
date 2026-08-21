#include <stdio.h>

int main()
{
    int a, b,x,y, r, gcd, lcm;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM is:%d", lcm);
    return 0;
}