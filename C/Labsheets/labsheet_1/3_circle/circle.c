#include <stdio.h>

int main() {
    float circumference, area, radius;

    printf("Enter the radius of circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("The circumference and area of circle having radius %.3f is %.3f and %.3f\n", radius, circumference, area);

    return 0;
}