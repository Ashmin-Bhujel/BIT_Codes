#include <stdio.h>

int main() {
    int numbers[10] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34}, i;

    for (i = 0; i < 10; i++) {
        printf("[%d]\t", numbers[i]);
    }

    printf("\n");

    return 0;
}