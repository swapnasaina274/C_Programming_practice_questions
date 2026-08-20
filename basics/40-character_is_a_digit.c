#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if (ch>='0' && ch<='9')
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is a character.");
    }
    return 0;
}