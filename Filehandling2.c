#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    printf("Kalpana Yadav, 125113003\n");
    // Open file in read mode
    fp = fopen("number.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Contents of the file:\n");
    // Read character by character until EOF
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);   // display each character
    }

    fclose(fp);  // close the file
    return 0;
}
