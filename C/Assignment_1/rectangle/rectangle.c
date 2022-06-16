#include <stdio.h>

int main() {
    float l, b, area, peri;

    printf("Enter length of the rectangle: ");
    scanf("%f", &l);    // l = 10

    printf("Enter breadth of the rectangle: ");
    scanf("%f", &b);    // b = 20

    area = l * b;    // area = 10 * 20
    peri = 2 * (l + b);    // peri = 2 * (10 + 20)

    printf("The area of the given rectangle is %f\n", area);
    printf("The perimeter of the given rectangle is %f\n", peri);
    /*
        Output:
        The area of the given rectangle is 200.000000
        The perimeter of the given rectangle is 60.000000
     */

    return 0;
}