#include <stdio.h>

int main() {
    int salary[100], n, count = 0;

    printf("How many employees? ");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the salary of employee[%d]: ", i);
        scanf("%d", &salary[i]);
    }

    for (i = 0; i < n; i++) {
        if (salary[i] >= 10000 && salary[i] <= 15000) {
            count++;
        }
    }

    printf("The total number of employees having salary between 10000 and 15000 is %d\n", count);

    return 0;
}