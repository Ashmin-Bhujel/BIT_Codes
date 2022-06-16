#include <stdio.h>

int main() {
    int numbers[100], n, temp;

    printf("How many numbers? ");
    scanf("%d", &n);

    int i, j, k;
    for (i = 0; i < n; i++) {
        printf("Enter value of numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    for (j = 0; j < n - 1; j++) {
        for (k = j + 1; k < n; k++) {
            if (numbers[j] < numbers[k]) {
                temp = numbers[j];
                numbers[j] = numbers[k];
                numbers[k] = temp;
            }
        }
    }

    printf("The greatest of all the entered numbers is %d\n", numbers[0]);

    return 0;
}