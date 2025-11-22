#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float average;
    printf("Kalpana Yadav, 125113003\n");
    // Open the file in read mode
    fp = fopen("number.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1; // Exit if file not found
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);
    if (count > 0) {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers found in the file.\n");
    }
    return 0;
}
