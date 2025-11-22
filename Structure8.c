#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};
// Function to sort students by roll number
void sortByRoll(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].roll > students[j].roll) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }}}}
int main() {
    int n;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    // Input student records
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);  // use fgets if you want full names with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    // Sort students by roll  number
    sortByRoll(students, n);
    // Display sorted records
    printf("\n--- Student Records Sorted by Roll Number ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               students[i].roll, students[i].name, students[i].marks);
    }
    return 0;
}
