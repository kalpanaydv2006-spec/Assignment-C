#include<stdio.h>
int main(){
    int i;
    int arr[]={23,34,32,35,45,56};
    int largest=arr[0];
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("Kalpana Yadav,125113003\n");
    printf("Array is:");
    for(i=0; i<length; i++){
        printf(" %d", arr[i]);
    }
    for(i=0; i<length; i++){
        if(arr[i]>arr[0]){
            int largest=arr[i];
        }
    }printf("\nLargest element in array is: ");
    printf("%d", arr[i]);
    return 0;
}