#include <stdio.h>

int main() {
    int num;

    // Taking the value of num from user
    printf("Enter a number: ");
    scanf("%d", &num);

    int i;
    // Iterating to check whether given number is prime or not
    for (i = 1; i <= num; i++) {
        // A prime number is a number which is exactly divisible by 1 and itself only.
        // 1 is not a prime number
        if (num % i == 0 && i == num && num != 1) {
            printf("The given number %d is a prime number.\n", num);
        } else if (num % i == 0 && i < num && i != 1) {
            printf("The given number %d is not a prime number.\n", num);
            break;
        } else if (num == 1) {
            printf("The given number %d is not a prime number.\n", num);
            break;
        }
    }

    return 0;
}