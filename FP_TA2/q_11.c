// Write a C program to create a structure namely employee (assume 10 employees) and display details like name, year of joining, salary, date of birth, Employee ID (Alphanumeric), etc.

#include<stdio.h>

struct emp {
    char name[20];
    int yoj;
    float salary;
    char dob[20];
    char emp_id[20];
};

int main() {
    struct emp e[10];

    for (int i = 0; i < 10; i++) {
        printf("\n\nEnter Detail for employee %d: \n", i + 1);

        printf("Enter name of employee : ");
        scanf("%s", e[i].name);

        printf("Enter year of joining of employee : ");
        scanf("%d", &e[i].yoj);

        printf("Enter salary of employee : ");
        scanf("%f", &e[i].salary);

        printf("Enter date of birth of employee: ");
        scanf("%s", e[i].dob);

        printf("Enter Employee ID of employee : ");
        scanf("%s", e[i].emp_id);
    }

    for (int i = 0; i < 10; i++) {
        printf("\nEmployee %d Details:\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Year of Joining: %d\n", e[i].yoj);
        printf("Salary: %.2f\n", e[i].salary);
        printf("Date of Birth: %s\n", e[i].dob);
        printf("Employee ID: %s\n", e[i].emp_id);
    }
    return 0;
}
