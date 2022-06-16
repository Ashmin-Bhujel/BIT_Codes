#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Taking value of num from user
    printf("Enter a number: ");
    scanf("%d", &num);

    int i;
    // Iterating to find factorial of num
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("The value of factorial of %d is %d\n", num, factorial);

    return 0;
}