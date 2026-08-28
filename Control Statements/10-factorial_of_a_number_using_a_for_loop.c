#include <stdio.h>

int main(){
    int i,n,mul=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
       mul=i*mul;
       
    }
    printf("Factorial of %d is:%d",n,mul);
    return 0;
}