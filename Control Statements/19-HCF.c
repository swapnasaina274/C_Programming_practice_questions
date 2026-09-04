#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Store original values for printing at the end
    int num1 = a;
    int num2 = b;
    
    // Euclidean algorithm using a loop
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("HCF of %d and %d is: %d\n", num1, num2, a);
    
    return 0;
}