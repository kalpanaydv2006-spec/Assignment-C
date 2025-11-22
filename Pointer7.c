#include <stdio.h>

int main() {
    int arr[100], n;
    int *p;   // pointer to traverse the array
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    p = arr;  // point to the first element of array
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));   // access element using pointer arithmetic
    }
    return 0;
}
