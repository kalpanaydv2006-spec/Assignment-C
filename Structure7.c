#include <stdio.h>

// Define Student structure with nested Date structure
struct Student {
    char name[50];
    int roll;

    // Nested structure for Date
    struct Date {
        int day;
        int month;
        int year;
    } dob;  // Declare dob inside Student
};

int main() {
    struct Student s1;
    printf("Kalpana Yadav, 125113003\n");
    // Input student details
    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter DOB (day month year): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("DOB : %02d-%02d-%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
