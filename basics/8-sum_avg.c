#include <stdio.h>

int main(){
    int a,b,c,sum,avg;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Enter your third number:");
    scanf("%d",&c);
    sum=a+b+c;
    printf("Sum of the three number:%d\n",sum);
    avg=sum/3;
    printf("Average of the three number:%d\n",avg);

    return 0;
}