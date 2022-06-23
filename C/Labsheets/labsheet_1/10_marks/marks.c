#include <stdio.h>

int main() {
    int sociology, c, maths, iit, dl, agg;
    float percentage;

    printf("Enter marks obtained in Sociology: ");
    scanf("%d", &sociology);

    printf("Enter marks obtained in C Programming: ");
    scanf("%d", &c);

    printf("Enter marks obtained in Mathematics: ");
    scanf("%d", &maths);

    printf("Enter marks obtained in Intro to IT: ");
    scanf("%d", &iit);

    printf("Enter marks obtained in Digital Logic: ");
    scanf("%d", &dl);

    agg = (sociology + c + maths + iit + dl);

    percentage = (float)agg / 5;

    printf("The aggregate mark and percentage mark obtained by the student is %d and %f percentage\n", agg, percentage);

    return 0;
}