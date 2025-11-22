#include<stdio.h>
int main(){
    int i;
    int n;// to find factorial of n
    int fact= 1;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter n\n");
    scanf("%d", &n);
    for(i=1; i<= n; i++){
        fact *= i;
    }printf("factorial of %d is %d\n", n,fact);
    return 0;
}