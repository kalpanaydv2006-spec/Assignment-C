#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
printf("Kalpana Yadav, 125113003\n");
int i,N;
float sum =0;
printf("Enter number of students\n");
scanf("%d", &N);
    struct Student s[N];
    for(i=0; i<N; i++){
        printf("Details of student %d\n", i+1);
        printf("Name\n");
        scanf("%s", s[i].name);
        printf("Roll number\n");
        scanf("%d", &s[i].roll);
        printf("Marks\n");
        scanf("%f", &s[i].marks);
        sum = sum + s[i].marks; 
    }
    printf("Sum of marks is %f\n", sum);
    printf("Average of marks is %f\n", sum/N);
return 0;
}