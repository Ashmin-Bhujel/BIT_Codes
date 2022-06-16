#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking value of n from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    // Iterating to find sum upto n natural numbers
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of all natural numbers from 1 to %d is %d\n", n, sum);

    return 0;
}