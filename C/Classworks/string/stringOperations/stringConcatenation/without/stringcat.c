#include <stdio.h>

int main() {
    char first_str[20], second_str[20], cat_str[40];
    int i, j;

    printf("Enter first string: ");
    gets(first_str);

    printf("Enter second string: ");
    gets(second_str);

    for (i = 0; first_str[i] != '\0'; i++) {
        cat_str[i] = first_str[i];
    }

    cat_str[i] = ' ';

    for (j = 0; second_str[j] != '\0'; j++) {
        cat_str[i + 1 + j] = second_str[j]; 
    }

    cat_str[i + j + 1] = '\0';

    printf("The concatenated string is \"%s\"\n", cat_str);

    return 0;
}