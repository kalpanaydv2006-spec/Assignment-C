#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter source filename: ");
    scanf("%s", sourceName);
    printf("Enter destination filename: ");
    scanf("%s", destName);
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file %s\n", sourceName);
        return 1;
    }
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file %s\n", destName);
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    printf("File copied successfully from %s to %s\n", sourceName, destName);
    // Close both files
    fclose(sourceFile);
    fclose(destFile);
   return 0;
}