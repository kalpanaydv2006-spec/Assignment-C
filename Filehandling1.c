#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    printf("Kalpana Yadav, 125113003\n");
    // Open file in write mode (creates file if not exists)
    fp = fopen("number.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter some text: ");
    // Read a line of input (including spaces)
    fgets(text, sizeof(text), stdin);

    // Write input into file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("Text has been written to number.txt successfully.\n");

    return 0;
}
