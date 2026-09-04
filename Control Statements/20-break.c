#include <stdio.h>

int main()
{
    printf("Counting from 1 to 10 (stopping at 5 using break):\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            printf("Break condition met at i = %d. Exiting loop...\n", i);
            break; // Exits the loop immediately
        }
        printf("%d ", i);
    }

    printf("\nLoop ended.\n");
    return 0;
}