#include<stdio.h>
#include<string.h>
struct Mystructure{
    int rollnumber;
    char name[50];
    int marks;
};
int main(){
    printf("Kalpana Yadav, 125113003\n");
    struct Mystructure s1;

s1.rollnumber =13;
strcpy(s1.name, "Kalpana");
s1.marks = 50;
printf("Details of students\n");
printf("Roll number: %d\n", s1.rollnumber);
printf("Name of student: %s\n", s1.name);
printf("Marks of student: %d\n", s1.marks);
return 0;}