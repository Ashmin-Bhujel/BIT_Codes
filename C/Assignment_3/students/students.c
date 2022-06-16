#include <stdio.h>

int main() {
    int marks[100], n, count = 0;

    printf("How many students? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the marks of student[%d]: ", i);
        scanf("%d", &marks[i]);
        if (marks[i] >= 60 && marks[i] <= 80) {
            count++;
        }
    }

    printf("The total number of students having marks between 60 and 80 is %d\n", count);

    return 0;
}