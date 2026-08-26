#include <stdio.h>

int main()
{
    char choice;
    int a, b;
    printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for division\n");
    printf("Enter your choice:");
    scanf("%c", &choice);
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    switch (choice)
    {
    case '+':
        printf("%d+%d=%d", a, b, a + b);
        break;
    case '-':
        printf("%d-%d=%d", a, b, a - b);
        break;
    case '*':
        printf("%d*%d=%d", a, b, a * b);
        break;
    case '/':
        printf("%d/%d=%d", a, b, a / b);
        break;

    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}