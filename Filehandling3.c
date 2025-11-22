#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter the filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord) {
words++;
    }

    fclose(fp);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}
