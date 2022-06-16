#include <stdio.h>

int main() {
    float edge, surface_area;

    printf("Enter the length of edge of the cube: ");
    scanf("%f", &edge);

    surface_area = 6 * edge * edge;

    printf("The surface area of the cube having length of edge %.3f is %.3f\n", edge, surface_area);

    return 0;
}