#include <stdio.h>

int main() {
    int num1, num2, quotient, remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("The quotient and remainder of the given numbers %d and %d is %d and %d\n", num1, num2, quotient, remainder);

    return 0;
}