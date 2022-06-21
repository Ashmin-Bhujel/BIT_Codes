#include <stdio.h>

int main() {
    char name[20];

    printf("What is your name? ");
    scanf("%[^\n]", name);
    printf("\nHello, %s\nWelcome to the world of C Programming.\n", name);
    return 0;
}