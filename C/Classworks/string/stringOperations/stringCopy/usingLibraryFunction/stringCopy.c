#include <stdio.h>
#include <string.h>

int main() {
    char str[100], cpy[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    strcpy(cpy, str);

    printf("\nOriginal string: \"%s\"\n", str);
    printf("Copied string: \"%s\"\n", cpy);

    return 0;
}