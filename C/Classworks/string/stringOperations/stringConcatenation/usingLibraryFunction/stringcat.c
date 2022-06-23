#include <stdio.h>
#include <string.h>

int main() {
    char first_str[20], second_str[20], space[2] = " ";

    printf("Enter first string: ");
    gets(first_str);

    printf("Enter second string: ");
    gets(second_str);

    strcat(first_str, space);
    // Given space string as second argument cause strcat() does not put space between two strings
    // space string gets concatenated to first_str
    // Initial value of first_str wil get overwrite by concatenated string
    strcat(first_str, second_str);

    printf("The concatenated string is \"%s\"\n", first_str);

    return 0;
}