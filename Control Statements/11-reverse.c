#include <stdio.h>

int main(){
    int n,rev=0, rem;
    printf("Enter an integer:");
    scanf("%d",&n); //73589
    while (n!=0)
    {
        rem=n%10; //9,8,5,3
        rev=rev*10+rem;//9,98,985,9853,98537
        n=n/10;//7358,735,73,7
       
    
    }
     printf("%d",rev);
    
   
    return 0;
}