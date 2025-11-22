#include <stdio.h>

// Define a structure
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s1;           // structure variable
    struct Student *ptr;         // pointer to structure

    ptr = &s1;   // assign address of s1 to pointer
    printf("Kalpana Yadav, 125113003\n");
    // Access and modify members using pointer
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);
    // Display modified values
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
