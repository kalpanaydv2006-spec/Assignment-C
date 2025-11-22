#include<stdio.h>
int main(){
    int mat[3][3], i,j;
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter values of matrix:\n");
    for(i=0; i<3; i++)
    for(j=0; j<3; j++){
printf("Enter element[%d][%d]\n", i,j);
scanf("%d", &mat[i][j]);
}
printf("\nOriginal matrix is:");
for(i=0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++)
    printf("%d\t", mat[i][j]);
}
printf("\nTranspose of matrix is:");
for(i=0; i<3; i++){
    printf("\n");
for(j=0; j<3; j++){
    printf("%d\t", mat[j][i]);
}}
return 0;
}