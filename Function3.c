#include<stdio.h>
void GCD(int a,int b){
    while(a !=b){
        if(a>b)
        a= a-b;
    else{
        b =b-a;
    }
}
    printf("GCD of two numbers is %d", a);
    
}
int main(){
    int a,b;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter a\n");
    scanf("%d", &a);
    printf("Enter b\n");
    scanf("%d", &b);
    GCD(a,b);
}