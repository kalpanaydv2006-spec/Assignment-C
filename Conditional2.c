#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Kalpana Yadav,125113003\n");
    printf("Enter three numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    if(num1>= num2){
        if(num1>= num3){
            printf("%d is the largest number\n", num1);
        }else{
            printf("%d is the largest number\n", num3);
        }
    }else{
        if(num2>= num3){
            printf("%d is the largest number\n", num2);
        }else{
            printf("%d is the largest number\n", num3);
        }
    }
    return 0;
}