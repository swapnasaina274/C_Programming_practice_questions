#include <stdio.h>

int main(){
    int radius;
    float circumference;
    const float PI=3.14;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    circumference=2*PI*radius;
    printf("The circumference of the circle is:%f",circumference);
    return 0;
}