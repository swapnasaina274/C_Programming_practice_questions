#include <stdio.h>

int main(){
    float a,b,mul;
    printf("Enter two float numbers:");
    scanf("%f %f",&a,&b);
    mul = a*b;
    printf("Product is:%.2f",mul);
    return 0;
}