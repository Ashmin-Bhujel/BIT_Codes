#include <stdio.h>

int main() {
    int num, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Iterating until the given number is equal to 0
    while (num != 0) {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num /= 10;
    }

    printf("The reverse of given number is %d\n", reverse);

    return 0;
}