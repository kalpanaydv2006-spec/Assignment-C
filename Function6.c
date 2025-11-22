#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return 0;  // not a palindrome
        }
        i++;
        j--;
    }
    return 1;  // palindrome
}
int main() {
    char str[100];
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
