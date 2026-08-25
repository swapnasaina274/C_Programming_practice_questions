#include <stdio.h>

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if (num%3==0)
    {
       if (num%5==0)
       {
         printf("The number is divisible by both 3 and 5");
       }
       else
       {
        printf("The number is divisible by 3 but not 5");
       }
    }
    else
    {
      printf("Number is neither divisible by 3 nor 5");
    }
    
    
    return 0;
}
