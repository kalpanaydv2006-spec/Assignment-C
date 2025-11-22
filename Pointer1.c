#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value at address a
    *a = *b;     // put value at address b into address a
    *b = temp;   // put temp (original a) into address b
}
int main() {
    int x, y;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // Call swap function with addresses of x and y
    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
