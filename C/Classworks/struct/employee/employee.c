#include <stdio.h>

// User-defined struct employee data type
struct employee {
    char name[20];
    int id;
    int age;
    char address[20];
    char branch[20];
};

int main() {

    struct employee e1, e2;

    // Asking for first employee's detail
    printf("\n------ Employee 1 ------\n");
    
    printf("Enter the name of employee: ");
    scanf("%s", e1.name);
    
    printf("Enter id: ");
    scanf("%d", &e1.id);
    
    printf("Enter age: ");
    scanf("%d", &e1.age);
    
    printf("Enter address: ");
    scanf("%s", e1.address);
    
    printf("Enter branch: ");
    scanf("%s", e1.branch);

    // Asking for second employee's detail
    printf("\n------ Employee 2 ------\n");
    
    printf("Enter the name of employee: ");
    scanf("%s", e2.name);
    
    printf("Enter id: ");
    scanf("%d", &e2.id);
    
    printf("Enter age: ");
    scanf("%d", &e2.age);
    
    printf("Enter address: ");
    scanf("%s", e2.address);
    
    printf("Enter branch: ");
    scanf("%s", e2.branch);

    printf("\n------ Employee 1 ------\n");
    printf("Employee 1:\n%s\t%d\t%d\t%s\t%s\n", e1.name, e1.id, e1.age, e1.address, e1.branch);

    printf("\n------ Employee 2 ------\n");
    printf("Employee 2:\n%s\t%d\t%d\t%s\t%s\n", e2.name, e2.id, e2.age, e2.address, e2.branch);

    return 0;
}