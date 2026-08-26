#include <stdio.h>

int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num>0)
    {
         if (num%2==0)
         {
           printf("both positive and even");
         }
         else
         {
            printf("positive and odd");
         }
         
    }
    else
         {
            printf("Number is negative");
         }
    
   
    return 0;
}