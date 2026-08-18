#include <stdio.h>

int main(){
    float km,mile;
    printf("Enter the distance in kilometer:");
    scanf("%f",&km);
    mile=km*0.621;
    printf("Distance in miles:%f",mile);
    return 0;
}