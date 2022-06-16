#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter value of length: ");
    scanf("%f", &length);

    printf("Enter value of breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area and perimeter of the rectangle having length %.3f and breadth %.3f is %.3f and %.3f\n", length, breadth, area, perimeter);

    return 0;
}