#include <stdio.h>

// Function to calculate average of array elements
float findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];   // add each element
    }
    return (float)sum / n;   // return average as float
}

int main() {
    int arr[100], n;
    float avg;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    avg = findAverage(arr, n);   // call function

    printf("Average of array elements = %.2f\n", avg);
    return 0;
}
