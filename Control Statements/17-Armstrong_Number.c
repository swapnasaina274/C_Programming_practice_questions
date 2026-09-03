#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    double sum = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count the total number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Step 2: Extract each digit and add digit^digits to sum
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Step 3: Check if sum matches the original number
    if ((int)sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is NOT an Armstrong number.\n", originalNum);
    }

    return 0;
}