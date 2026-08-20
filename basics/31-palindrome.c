#include <stdio.h>

int main(){
    int num,previous,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    previous=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
  
    if (rev==previous)
    {
        printf("Palindrome");

    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}