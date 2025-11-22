#include <stdio.h>

struct Employee {
    float basic;   // Basic salary
    float da;      // Dearness Allowance
    float hra;     // House Rent Allowance
};

int main() {
    struct Employee emp;   // Declare employee variable
    float gross;
    printf("Kalpana Yadav, 125113003\n");
    // Input employee salary details
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    printf("Enter Dearness Allowance (DA): ");
    scanf("%f", &emp.da);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &emp.hra);

    // Compute Gross Salary
    gross = emp.basic + emp.da + emp.hra;

    // Display result
    printf("\nGross Salary = %.2f\n", gross);

    return 0;
}

