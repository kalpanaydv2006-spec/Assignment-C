#include<stdio.h>
int main(){
    int n;
    int i=1;
    int table;//to print multiplication table of n
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter n\n");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    while(i<=10){
    table =n*i;
    printf("%d * %d = %d\n", n,i,table);
     i++;}
    return 0;
}