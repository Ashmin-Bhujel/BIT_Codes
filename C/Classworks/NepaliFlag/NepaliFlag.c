#include <stdio.h>

int main() {
    int row, col;

    for (row = 1; row <= 23; row++) {
        for (col = 1; col <= 10; col++) {
            if (row <= 10) { // for row 1 to 10
                if (col == 1 || col == row) {
                    printf(" O ");
                } else if (row == 10 && (col >= 3 && col <= 10)) {
                    printf(" O ");
                } else if (row == 6 && (col == 3)) {
                    printf(" * ");
                } else if (row == 7 && (col == 3 || col == 4)) {
                    printf(" * ");
                } else {
                    printf("   ");
                }
            } else if (row <= 17) { // For row 11 to 17
                if (col == 1 || col == (row - 7)) {
                    printf(" O ");
                } else if ((row == 13 || row == 14) && (col == 3 || col == 4)) {
                    printf(" * ");
                } else if (row == 17 && col <= 10) {
                    printf(" O ");
                } else {
                    printf("   ");
                }
            } else if (row <= 23) { // For row 18 to 23
                if (col == 1) {
                    printf(" O ");
                } else {
                    printf("   ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}