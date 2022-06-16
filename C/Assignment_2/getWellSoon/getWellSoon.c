#include <stdio.h>

int main() {
    int n;

    // Taking value of n from user
    printf("Enter how many times: ");
    scanf("%d", &n);

    int i;
    // Iterating for n times
    for (i = 1; i <= n; i++) {
        printf("Get Well Soon...\n");
    }

    return 0;
}