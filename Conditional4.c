#include<stdio.h>
int main(){
    int N;
    int sum=0;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter N\n");
    scanf("%d", &N);
int i;
for(i=1; i<=N; i++)
sum +=i;
printf("sum of first %d natural numbers is %d\n", N,sum);
return 0;
}