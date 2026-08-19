#include <stdio.h>

int main(){
    int a,b,OR;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    OR=a|b;
    printf("Result:%d\n",OR);
    return 0;
}