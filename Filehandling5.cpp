#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char data[200];
    printf("Kalpana Yadav, 125113003\n");
    // Ask user for file name
    printf("Enter the filename: ");
    scanf("%s", filename);
    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    // Ask user for data to append
    printf("Enter text to append: ");
    getchar(); // consume newline left by scanf
    fgets(data, sizeof(data), stdin);

    // Write data at the end of the file
    fputs(data, fp);
    printf("Data appended successfully to %s\n", filename);
    // Close file
    fclose(fp);

    return 0;
}
