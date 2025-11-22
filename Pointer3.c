#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word (no spaces)

    ptr = str;          // pointer points to the first character of string
    // Traverse until null character '\0'
    while (*ptr != '\0') {
        length++;
        ptr++;          // move pointer to next character
    }
    printf("Length of string = %d\n", length);
    return 0;
}
