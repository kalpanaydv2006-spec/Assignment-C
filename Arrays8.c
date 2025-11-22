#include<stdio.h>
int main(){
    int n, i, j;
    int mainDiagonalsum =0, secondaryDiagonalsum =0;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter the order of square matrix:");
    scanf("%d", &n);
    int mat[n][n];
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        printf("Element[%d][%d]:\n",i,j);
    scanf("%d", &mat[i][j]);}
    }printf("Matrix is:\n");
    for(i=0; i<n; i++){
for(j=0; j<n; j++){
printf("%d\t", mat[i][j]);}
printf("\n");}
for(i=0; i<n; i++)
mainDiagonalsum += mat[i][i];
secondaryDiagonalsum += mat[i][n-1-i];
printf("Sum of main diagonal elements is: %d\n", mainDiagonalsum);
printf("Sum of secondary diagonal elements is: %d", secondaryDiagonalsum);
return 0;
}