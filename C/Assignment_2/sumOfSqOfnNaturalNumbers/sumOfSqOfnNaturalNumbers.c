#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    // Iterating to find value of sum of square of n natural numbers
    for (i = 1; i <= n; i++) {
        sum += (i * i);
    }

    printf("The sum of squares of natural numbers from 1 to %d is %d\n", n, sum);

    return 0;
}