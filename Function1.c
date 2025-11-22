#include<stdio.h>
void prime(int i);
int main(){
    int i;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number to be checked\n");
    scanf("%d", &i);
    prime(i);
}
void prime(int i){
    int x, count=0;
    for(x=1; x<=i; x++){
        if(i%x == 0)
        count ++;
    }
    if(count == 2)
    printf("Is prime\n");
else{
    printf("Not a prime\n");
}

}