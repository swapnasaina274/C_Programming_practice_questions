#include <stdio.h>

int main(){
    char character;
    printf("Enter any character:");
    scanf("%c",&character);
    switch (character)
    {
    case 'a':
    printf("A is a vowel");
        break;
     case 'e':
    printf("E is a vowel");
        break;
    
     case 'i':
    printf("I is a vowel");
        break;
    
     case 'o':
    printf("O is a vowel");
        break;
    
     case 'u':
    printf("U is a vowel");
        break;
    
    default:
    printf("It is a consonant");
        break;
    }
    return 0;
}