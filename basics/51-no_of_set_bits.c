#include <stdio.h>

int main() {
    unsigned int n, count = 0;

    printf("Enter a number: ");
    scanf("%u", &n);

    while (n > 0) {
        if (n & 1)
            count++;

        n = n >> 1;
    }

    printf("Number of set bits = %u\n", count);

    return 0;
}