#include <stdio.h>

int main()
{
    printf("Printing odd numbers between 1 and 10 (skipping evens with continue):\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue; // Skips even numbers and jumps to the next iteration
        }
        printf("%d ", i);
    }

    printf("\nDone.\n");
    return 0;
}