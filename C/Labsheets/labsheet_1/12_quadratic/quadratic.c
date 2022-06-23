#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x0, x1, x2, discriminant;
    // Use a = 1, b = 5 and c = 6
    // We get roots -2 and -3

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    discriminant = pow(b, 2) - (4 * a * c);
    // Using pow(number, power) function from math.h

    if (discriminant > 0) {
        x1 = (-b + pow(discriminant, (1 / 2))) / (2 * a);
        x2 = (-b - pow(discriminant, (1 / 2))) / (2 * a);
        printf("The first root is %d and second root is %d\n", x1, x2);
    } else if (discriminant == 0) {
        x0 = -b / (2 * a);
        printf("The root is %d\n", x0);
    } else {
        printf("The value of discriminant is negative so, root is a complex number.\n");
    }

    return 0;
}