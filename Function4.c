#include <stdio.h>

// Function to reverse an integer
int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);  // take last digit and add to rev
        num = num / 10;               // remove last digit
    }
    return rev;   // return the reversed number
}

int main() {
    int n, result;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter an integer: ");
    scanf("%d", &n);

    result = reverse(n);   // call the function

    printf("Reverse of %d is %d\n", n, result);

    return 0;
}
