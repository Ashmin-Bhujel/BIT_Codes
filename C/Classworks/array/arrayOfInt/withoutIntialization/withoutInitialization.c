#include <stdio.h>

int main() {
    int numbers[10], i;

    for (i = 0; i < 10; i++) {
        printf("Enter value of numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 10; i++) {
        printf("[%d]\t", numbers[i]);
    }

    printf("\n");

    return 0;
}