#include <stdio.h>

int main() {
    int seconds, minutes, hours;

    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    hours = minutes / 60;

    printf("%d seconds is equal to:\n%d minutes\n%d hours\n", seconds, minutes, hours);

    return 0;
}