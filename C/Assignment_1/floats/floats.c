#include <stdio.h>

int main() {
    float num1, num2, sum, diff, product, div;

    printf("Enter first number: ");
    scanf("%f", &num1);    // num1 = 2.5

    printf("Enter second number: ");
    scanf("%f", &num2);    // num2 = 4.25

    sum = num1 + num2;    // sum = 2.5 + 4.25
    diff = num1 - num2;    // diff = 2.5 - 4.25
    product = num1 * num2;    // product = 2.5 * 4.25
    div = num1 / num2;    // div = 2.5 / 4.25

    printf("The result of sum of given numbers %f and %f is %f.\n", num1, num2, sum);
    printf("The result of subtraction of given numbers %f and %f is %f.\n", num1, num2, diff);
    printf("The result of product of given numbers %f and %f is %f.\n", num1, num2, product);
    printf("The result of division of given numbers %f and %f is %f.\n", num1, num2, div);
    /*  
        Output:        
        The result of sum of given numbers 2.500000 and 4.250000 is 6.750000.
        The result of subtraction of given numbers 2.500000 and 4.250000 is -1.750000.
        The result of product of given numbers 2.500000 and 4.250000 is 10.625000.
        The result of division of given numbers 2.500000 and 4.250000 is 0.588235.
     */

    return 0;
}