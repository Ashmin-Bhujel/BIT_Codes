#include <stdio.h>

int main() {
    float c, f;

    printf("Enter temperature in centigrade: ");
    scanf("%f", &c);

    f = ((c * 9) / 5) + 32;

    printf("The temperature in fahrenheit is %f\n", f);

    return 0;
}