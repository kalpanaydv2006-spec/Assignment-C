#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0)   // base case
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);  // recursive step
}

int main() {
    int num;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;  // handle negative numbers
    }

    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));

    return 0;
}
