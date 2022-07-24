#include <stdio.h>

// User-defined struct student data type
struct student {
    char name[20];
    int roll_no;
    int age;
    char address[20];
    char program[20];
};

int main() {

    struct student s1, s2;

    // Asking for first student's detail
    printf("\n------ Student 1 ------\n");
    
    printf("Enter the name of student: ");
    scanf("%s", s1.name);
    
    printf("Enter roll no: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    printf("Enter address: ");
    scanf("%s", s1.address);
    
    printf("Enter program/faculty: ");
    scanf("%s", s1.program);

    // Asking for second student's detail
    printf("\n------ Student 2 ------\n");
    
    printf("Enter the name of student: ");
    scanf("%s", s2.name);
    
    printf("Enter roll no: ");
    scanf("%d", &s2.roll_no);
    
    printf("Enter age: ");
    scanf("%d", &s2.age);
    
    printf("Enter address: ");
    scanf("%s", s2.address);
    
    printf("Enter program/faculty: ");
    scanf("%s", s2.program);

    printf("\n------ Student 1 ------\n");
    printf("Student 1:\n%s\t%d\t%d\t%s\t%s\n", s1.name, s1.roll_no, s1.age, s1.address, s1.program);

    printf("\n------ Student 2 ------\n");
    printf("Student 2:\n%s\t%d\t%d\t%s\t%s\n", s2.name, s2.roll_no, s2.age, s2.address, s2.program);

    return 0;
}