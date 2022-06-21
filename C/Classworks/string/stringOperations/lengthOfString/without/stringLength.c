#include <stdio.h>

int main() {
    char str[100], length = 0, i;

    printf("Enter something as a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("The length of given string \"%s\" is %d\n", str, length);

    return 0;
}