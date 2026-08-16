#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int mul=a*b;
    printf("The multiplication of a and b is: %d",mul);
    return 0;
}