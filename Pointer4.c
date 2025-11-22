#include <stdio.h>

int main() {
    char str1[100], str2[100];   // source and destination strings
    char *p1, *p2;               // pointers to traverse strings
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter a string: ");
    scanf("%s", str1);           // read input string (no spaces)

    p1 = str1;   // point to the beginning of str1
    p2 = str2;   // point to the beginning of str2
    // Copy characters one by one using pointers
    while (*p1 != '\0') {
        *p2 = *p1;   // copy character
        p1++;        // move to next character in str1
        p2++;        // move to next position in str2
    }
    *p2 = '\0';      // add null terminator at the end

    printf("Copied string: %s\n", str2);

    return 0;
}
