#include <stdio.h>
struct Employee {
    int a;
    char name[100];
    char gen;
};
int main() {
    int num, i;
    printf("Enter the number of employees: ");
    scanf("%d", &num);
    struct Employee employees[100];
    printf("Enter the data of employees (Serial no, name, and gender):\n");
    for (i = 0; i < num; i++) {
        printf("Serial no: ");
        scanf("%d", &employees[i].a);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gen);
    }
    printf("\nEmployee Details:\n");
    for (i = 0; i < num; i++) {
        printf("Serial no: %d, Name: %s, Gender: %c\n", employees[i].a, employees[i].name, employees[i].gen);
    }
    return 0;
}
