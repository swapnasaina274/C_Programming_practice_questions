#include <stdio.h>

int main(){
    int a,b,EX_OR;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    EX_OR=a^b;
    printf("Result:%d",EX_OR);
    return 0;
}