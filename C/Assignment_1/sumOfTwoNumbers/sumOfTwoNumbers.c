#include <stdio.h>

int main() {
    float num1, num2, sum;

    printf("Enter first number: ");
    scanf("%f", &num1);    // num1 = 4

    printf("Enter second number: ");    // num2 = 2
    scanf("%f", &num2);

    sum = num1 + num2;    // sum = 4.000 + 2.000

    printf("The sum of given numbers %f and %f is %f.\n", num1, num2, sum);
    // Output: The sum of given numbers 4.000 and 2.000 is 6.000.

    return 0;
}