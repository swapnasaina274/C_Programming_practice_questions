#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int sum=a+b;
    printf("The addition of a and b is: %d",sum);
    return 0;
}