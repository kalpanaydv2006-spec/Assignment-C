#include<stdio.h>
int main(){
    int m,n mat1[m][n], mat2[m][n], i,j, sum[m][n];
    printf("Kalpana Yadav, 125113003\n");
    printf("Enter order of matrices:");
    scanf("%d,%d" ,m,n);
    printf("\nEnter elements of 1st matrix:");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++)
        printf("\nElement[%d][%d]", i,j);
    scanf("%d", &mat1[i][j]);
    }
printf("\nEnter elements of 2nd matrix:");
for(i=0; i<m; i++){
    for(j=0; j<n; j++)
    printf("\nElement[%d][%d]", i,j);
scanf("%d", &mat2[i][j]);
}
printf("First matrix:\n");
for(i=0; i<m; i++){
printf("\n");
for(j=0; j<n; j++){
printf("%d\t", mat1[i][j]);
}
}
printf("Second matrix:\n");
for(i=0; i<m; i++){
    printf("\n");
    for("j=0; j<n; j++"){
    printf("%d\t", mat2[i][j]);
}}

for(i=0; i<m; i++)
for(j=0; j<n; j++){
    sum[i][j] =mat1[i][j]+mat2[i][j];
}
printf("sum of matrices:\n");
for(i=0; i<m; i++){
    for(j=0; j<n; j++)
    printf("%d", sum[i][j]);
}
return 0;
}