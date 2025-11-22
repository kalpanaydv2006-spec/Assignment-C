#include <stdio.h>

// Function to add two matrices
void addMatrix(int r, int c, int a[10][10], int b[10][10], int result[10][10]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int r, int c, int mat[10][10]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r, c;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
  scanf("%d", &b[i][j]);
        }
    }
    // Call function to add matrices
    addMatrix(r, c, a, b, result);
    printf("\nResultant Matrix after Addition:\n");
    displayMatrix(r, c, result);
    return 0;
}
