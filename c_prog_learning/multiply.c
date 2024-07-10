#include <stdio.h>

int main() {
    // Declare variables to hold the numbers
    float num1, num2, result;

    // Ask the user to input the first number
    printf("Enter first number: ");
    scanf("%f", &num1);

    // Ask the user to input the second number
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Multiply the two numbers
    result = num1 * num2;

    // Display the result
    printf("Result of multiplication: %.2f\n", result);

    return 0;
}
