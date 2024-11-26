// Write a C program to find the sum of all the elements of a matrix. The number of rows and columns as well as the elements of the matrix are entered through the keyboard.

#include<stdio.h>

int main(){
    int rows, columns, sum=0;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &rows, &columns);

    int mat[rows][columns];

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("Enter the element [%d][%d]:- ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i<rows; i++){
        printf("|");
        for(int j=0; j<columns; j++){
            printf(" %d ", mat[i][j]);
            sum += mat[i][j];
        }
        printf("|\n");
    }
    printf("\nResult = %d", sum);
    return 0;
}