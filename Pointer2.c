#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Kalpana Yadav, 125113003\n");
    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer to the first element of array
    int *ptr = arr;

    // Calculate sum using pointer arithmetic
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);   // access element using pointer
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}
