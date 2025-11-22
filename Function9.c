#include <stdio.h>

// Function using call by value
void callByValue(int x) {
    x = x + 10;   // modifies local copy only
    printf("Inside callByValue, x = %d\n", x);
}
// Function using call by reference
void callByReference(int *y) {
    *y = *y + 10; // modifies original variable via pointer
    printf("Inside callByReference, y = %d\n", *y);
}
int main() {
    int a = 5, b = 5;
    printf("Kalpana Yadav, 125113003\n");
    printf("Initially: a = %d, b = %d\n", a, b);
    // Call by value
    callByValue(a);
    printf("After callByValue, a = %d\n\n", a);  // unchanged
    // Call by reference
    callByReference(&b);
    printf("After callByReference, b = %d\n", b); // changed

    return 0;
}
