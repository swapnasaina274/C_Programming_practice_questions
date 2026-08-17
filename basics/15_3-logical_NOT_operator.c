#include <stdio.h>

int main(){
    int a;
     printf("Enter the value of a:");
    scanf("%d", &a);
    a=!a;
    printf("value of a is:%d\n",a);
    return 0;
}