#include <stdio.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char ch;
    printf("Kalpana Yadav, 125113003\n");
    fp1 = fopen("number.txt", "r");
    if (fp1 == NULL) {
        printf("Error: Could not open number.txt\n");
        return 1;
    }
    fp2 = fopen("students.txt", "r");
    if (fp2 == NULL) {
        printf("Error: Could not open students.txt\n");
        fclose(fp1);
        return 1;
    }
    fp3 = fopen("merged.txt", "w");
    if (fp3 == NULL) {
        printf("Error: Could not create merged.txt\n");
        fclose(fp1);
        fclose(fp2);
        return 1;
    }
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }
    printf("Files merged successfully into merged.txt\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
