#include <stdio.h>

int main() {
    int size1, size2;
printf("Kalpana Yadav, 125113003\n");
    // Input sizes of the arrays
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], merged[size1 + size2];

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Display merged array
    printf("Merged array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}