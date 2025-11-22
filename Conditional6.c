#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    do {
        remainder = num % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num = num / 10;                   // Remove the last digit
    } while (num != 0);

    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
