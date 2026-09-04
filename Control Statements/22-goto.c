#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        goto UnderAge; // Jump to the UnderAge label
    }
    else
    {
        goto Eligible; // Jump to the Eligible label
    }

UnderAge:
    printf("Result: You are not eligible to vote.\n");
    goto End; // Skip the Eligible block to reach the end

Eligible:
    printf("Result: You are eligible to vote.\n");

End:
    printf("Program finished.\n");
    return 0;
}