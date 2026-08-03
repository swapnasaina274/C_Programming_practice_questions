#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a binary number:");
    scanf("%d %d",&a,&b);
    (a && b) ? printf("TRUE") : printf("FALSE");
    return 0;
}