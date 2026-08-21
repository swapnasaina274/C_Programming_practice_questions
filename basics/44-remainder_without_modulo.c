#include <stdio.h>

int main(){
    int divn,divs,quo,rem;
    printf("Enter two numbers:");
    scanf("%d %d",&divn,&divs);
    quo=divn/divs;
    printf("value of quotient:%d\n",quo);
    printf("vlue of remainder:%d",divn-(divs*quo));
    return 0;
}