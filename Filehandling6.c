#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    printf("Kalpana Yadav, 125113003\n");
    // Write a record
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 0;
    }
    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fprintf(fp, "%d %s %.2f\n", s.rollNo, s.name, s.marks);
    fclose(fp);
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 0;
    }
    fscanf(fp, "%d %s %f", &s.rollNo, s.name, &s.marks);
    printf("\nStored Record:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name   : %s\n", s.name);
    printf("Marks  : %.2f\n", s.marks);
    fclose(fp);

    return 0;
}