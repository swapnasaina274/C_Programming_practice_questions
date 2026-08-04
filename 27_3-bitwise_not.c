#include <stdio.h>

int main(){
    int a,NOT;
    printf("Enter a number:");
    scanf("%d",&a);
    NOT=~a;
    printf("Result:%d",NOT);
    return 0;
}