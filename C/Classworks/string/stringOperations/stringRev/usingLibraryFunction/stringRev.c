#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    strrev(str);
    // For some reasons the compiler I use is not recognizing the strrev() function
    // Check if it is the same case with you
    // Also, tried online compilers but same error occured

    printf("The reversed string is: ");
    puts(str);

    return 0;
}