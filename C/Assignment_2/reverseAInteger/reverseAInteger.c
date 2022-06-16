#include <stdio.h>

int main() {
    int real_num, rem, reverse = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &real_num);

    int num = real_num;

    // Iterating until the given number is equal to 0
    while (num != 0) {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num /= 10;
    }

    printf("The reverse of the given number %d is %d\n", real_num, reverse);

    return 0;
}