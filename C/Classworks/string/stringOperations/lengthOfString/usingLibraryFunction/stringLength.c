#include <stdio.h>
#include <string.h>

int main() {
    char str[100], length;

    printf("Enter something as a string: ");
    scanf("%[^\n]", str);

    length = strlen(str);

    printf("The length of given string \"%s\" is %d\n", str, length);

    return 0;
}