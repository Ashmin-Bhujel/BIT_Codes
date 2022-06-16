#include <stdio.h>

int main() {
    float num1, num2, sum, diff, product, div;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    div = num1 / num2;

    printf("The sum of given numbers %.2f and %.2f is %.2f.\n", num1, num2, sum);
    printf("The difference of given numbers %.2f and %.2f is %.2f.\n", num1, num2, diff);
    printf("The product of given numbers %.2f and %.2f is %.2f.\n", num1, num2, product);
    printf("The division of given numbers %.2f and %.2f is %.2f.\n", num1, num2, div);

    return 0;
}