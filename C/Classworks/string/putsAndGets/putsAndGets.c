#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    gets(name);
    // Using gets() gives us warning and suggets us to use fgets() instead

    printf("Welcome to the world of C programming ");
    puts(name);

    return 0;
}