#include <stdio.h>

// Define structure for Employee
struct Employee {
    int id;
    char name[50];
    float basic;
    float da;
    float hra;
};
// Function to display employee details
void displayEmployee(struct Employee emp) {
    float gross = emp.basic + emp.da + emp.hra;

    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Basic Salary: %.2f\n", emp.basic);
    printf("Dearness Allowance (DA): %.2f\n", emp.da);
    printf("House Rent Allowance (HRA): %.2f\n", emp.hra);
    printf("Gross Salary: %.2f\n", gross);
}

int main() {
    struct Employee e1;
   printf("Kalpana Yadav, 125113003\n");
    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);   // simple input (no spaces)

    printf("Enter Basic Salary: ");
    scanf("%f", &e1.basic);

    printf("Enter Dearness Allowance (DA): ");
scanf("%f", &e1.da);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &e1.hra);

    // Pass structure to function
    displayEmployee(e1);

    return 0;
}
