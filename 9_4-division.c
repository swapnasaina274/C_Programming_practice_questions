#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int div=a/b;
    printf("The division of a and b is: %d",div);
    return 0;
}