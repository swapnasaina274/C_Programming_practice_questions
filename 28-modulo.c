#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    int modulo=a%b;
    printf("The remainder is: %d",modulo);
    return 0;
}