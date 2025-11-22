#include<stdio.h>
int main(){
    int i,n;
    int arr[]={23,21,23,24,23,45,23,56};
    int length= sizeof(arr)/sizeof(arr[0]);
    int frequency=0;
    printf("Kalpana Yadav,125113003\n");
    printf("Enter number to find frequency:");
    scanf("%d", &n);
    printf("Array is : ");
    for(i=0; i<length; i++){
        printf(" %d", arr[i]);
    }
    printf("\nFrequency of %d in the array is",n);
    for(i=0; i<length; i++){
        if(arr[i] == n)
        frequency +=1;
    }
printf(" %d ", frequency);
return 0;
}