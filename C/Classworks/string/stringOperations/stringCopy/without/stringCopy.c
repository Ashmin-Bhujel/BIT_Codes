#include <stdio.h>

int main() {
    char str[100], cpy[100], i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        cpy[i] = str[i];
    }

    printf("\nOriginal string: \"%s\"\n", str);
    printf("Copied string: \"%s\"\n", cpy);

    return 0;
}