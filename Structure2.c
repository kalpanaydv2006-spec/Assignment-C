#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    int i,n;
    int pos=0; //pos is position of student
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of students\n");
    scanf("%d", &n);
    struct Student s[n];
    for(i=0; i<n; i++){
        printf("Enter details of student %d\n", i+1);
        printf("Name:");
        scanf("%s", s[i].name );
        printf("Roll number\n");
        scanf("%d", &s[i].roll);
        printf("Marks\n");
        scanf("%f", &s[i].marks);
    }
    for(i=0; i<n; i++){
        if(s[i].marks > s[pos].marks){
        pos = i;
    }}
    printf("Student with highest marks\n");
    printf("Name: %s\n", s[pos].name );
    printf("Roll number: %d\n", s[pos].roll);
    printf("Marks: %f\n", s[pos].marks);
    return 0;
}
