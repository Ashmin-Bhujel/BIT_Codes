#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, temp, area;

    printf("Enter value of side(a): ");
    scanf("%f", &a);

    printf("Enter value of side(b): ");
    scanf("%f", &b);

    printf("Enter value of side(c): ");
    scanf("%f", &c);

    s = ((a + b + c) / 2);

    temp = (s * (s - a) * (s - b) * (s - c));

    area = sqrt(temp);
    // There is some kind of error in the GCC compiler of Linux for library function sqrt()
    // So, I used Windows Dev C++ to check the output it was giving correct answer

    printf("The area of the given triangle is %f\n", area);
    
    return 0;
}