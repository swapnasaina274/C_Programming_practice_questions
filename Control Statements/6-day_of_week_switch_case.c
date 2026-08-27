#include <stdio.h>

int main(){
    int choice;
    printf("Enter 1 for Sunday\nEnter 2 for Monday\nEnter 3 for Tuesday\nEnter 4 for Wednesday\nEnter 5 for Thursday\nEnter 6 for Friday\nEnter 7 for Saturday\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("It's a Sunday");
        break;
    case 2:
        printf("It's a Monday");
        break;
    case 3:
        printf("It's a Tuesday");
        break;
    case 4:
        printf("It's a Wednesday");
        break;
    case 5:
        printf("It's a Thursday");
        break;
    case 6:
        printf("It's a Friday");
        break;
    case 7:
        printf("It's a Satureday");
        break;
    
    default:
    printf("Invalid choice");
        break;
    }
    return 0;
}