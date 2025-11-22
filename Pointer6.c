#include <stdio.h>

int main() {
    int arr[100], n;
    int *p;   // pointer to traverse the array
    int largest, smallest;
     printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    p = arr;  // point to the first element of array
    // Initialize largest and smallest with first element
    largest = *p;
    smallest = *p;
    // Traverse the array using pointer
    for (int i = 0; i < n; i++) {
        if (*(p + i) > largest) {
            largest = *(p + i);
        }
        if (*(p + i) < smallest) {
            smallest = *(p + i);
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    return 0;
}
