#include<stdio.h>
int main(){
    int i,a,b,C;
    printf("Kalpana Yadav, 125113003\n");
    printf("Eter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    printf("Enter i\n");
    scanf("%d", &i);
    switch(i){
    case 1: C=a+b;
          printf("%d\n", C);
          break;
    case 2: C=a-b;
    printf("%d\n", C);
    break;
    case 3: C=a*b;
    printf("%d\n", C);
    break;
    case 4: C=a/b;
    printf("%d\n", C);
    break;
    case 5: C=(a*b)*b;
    printf("%d\n", C);
    break;
    default: printf("None of the above\n");
    }
    return 0;      
}