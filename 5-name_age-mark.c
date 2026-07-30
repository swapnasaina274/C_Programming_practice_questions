#include <stdio.h>

int main()
{
    char name[50];
    int age;
    float marks;
    printf("Enter your Name:\n");
    scanf("%s", &name);
    printf("Enter your Age:\n");
    scanf("%d", &age);
    printf("Enter your Marrks:\n");
    scanf("%f", &marks);
    printf("Name of the student is %s\n", name);
    printf("Age of the student is %d\n", age);

    printf("Mark of the student is %f\n", marks);

    return 0;
}