#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
   if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("It a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}