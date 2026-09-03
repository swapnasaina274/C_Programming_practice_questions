#include <stdio.h>

int main() {
    int rows, i, j, space;
    int coef = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        // Print leading spaces for triangular alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            // First and last values in every row are always 1
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                // Calculate next element using the binomial coefficient formula
                coef = coef * (i - j + 1) / j;
            }

            printf("%4d", coef);
        }

        printf("\n");
    }

    return 0;
}