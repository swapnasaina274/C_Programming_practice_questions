#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping the value of a:%d\n",a);
    printf("After swapping the value of b:%d",b);
    return 0;
}