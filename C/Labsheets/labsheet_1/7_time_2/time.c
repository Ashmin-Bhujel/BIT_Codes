#include <stdio.h>

int main() {
    int days, months, years;

    printf("Enter total days: ");
    scanf("%d", &days);

    months = days / 30;
    years = months / 12;

    printf("%d days is equal to:\n%d months\n%d years\n", days, months, years);

    return 0;
}