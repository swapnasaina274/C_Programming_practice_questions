#include <stdio.h>

int main(){
    int i,n;
    float num,sum=0,avg;
    printf("Enter the number of elemnets:\n");
    scanf("%d",&n);
    if (n<=0)       
    {
        printf("number should be greater than 0");
        return 0;
    }
    
    for ( i = 1; i <= n; i++)
    {
        printf("Enter the number %d\n",i);
        scanf("%f",&num);
       sum=sum+num;
    }
       avg=sum/n;
    
    printf("Average of n natural numbers is:%f",avg);
    return 0;
}