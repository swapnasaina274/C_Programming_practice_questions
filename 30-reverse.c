#include <stdio.h>

int main(){
    int n,rev=0, rem;
    printf("Enter a number:");
    scanf("%d",&n); //73589
    while (n!=0) //number is not equal to zero
    {
        rem=n%10; //9,8,5,3                   //Get last 
        rev=rev*10+rem;//9,98,985,9853,98537  //Build reverse
        n=n/10;//7358,735,73,7                //Remove last digit
        printf("%d",rem);
    
    }
    
    
   
    return 0;
}