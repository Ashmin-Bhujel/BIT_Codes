#include <stdio.h>

int main() {
    char str[100], rev_str[100];
    int i, len = 0;

    printf("Enter a string: ");
    gets(str);

    // For length of given string
    // Can use strlen() library function also.
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    printf("Length of string: %d\n", len);

    for (i = 0; str[i] != '\0'; i++) {
        rev_str[i] = str[len - 1 - i];
    }

    printf("The reversed string is: ");
    puts(rev_str);

    return 0;
}