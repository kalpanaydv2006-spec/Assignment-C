#include<stdio.h>
int main(){
    int i;
    float sum=0;
    printf("Kalpana Yadav,125113003\n");
    int arr[]={23,21,20,12,13,14};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("Array is: ");
    for(i=0; i<length; i++){
        printf(" %d", arr[i]);
    }printf("\nSum of elements is: ");
    for(i=0; i<length; i++){
        sum = sum+arr[i];
    }
    printf("%f",sum);
    printf("\nAverage of elements is: %f",sum/length );
    return 0;
}