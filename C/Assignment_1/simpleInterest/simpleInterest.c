#include <stdio.h>

int main() {
    float p, t, r, si;

    printf("Enter principle amount(a): ");
    scanf("%f", &p);    // p = 100

    printf("Enter time(t): ");
    scanf("%f", &t);    // t = 2

    printf("Enter rate(r): ");
    scanf("%f", &r);    // r = 13

    si = (p * t * r) / 100;    // si = (100.00 * 2 * 13.000) / 100

    printf("The simple interest amount you get for principle amount %.2f with rate %f after %.0f years is %.2f.\n", p, r, t, si);
    // Output: The simple interest amount you get for principle amount 100.00 with rate 13.000000 after 2 years is 26.00.

    return 0;
}