#include <stdio.h>

int main() {
    float mm, cm, m, km;

    printf("Enter length in mm: ");
    scanf("%f", &mm);

    cm = mm / 10;
    m = cm / 100;
    km = m / 1000;

    printf("The given length %f mm is\n%f cm\n%f m\n%f km\n", mm, cm, m, km);

    return 0;
}