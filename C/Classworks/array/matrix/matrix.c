#include <stdio.h>

int main() {
    int matrix[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter the value of matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d]\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}