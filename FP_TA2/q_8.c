// Write a C program to find the largest element in a matrix. The number of rows and columns as well as the elements of the matrix are entered through the keyboard.

#include<stdio.h>

int main() {
    int rows, columns;
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &rows, &columns);

    int mat[rows][columns];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter the element [%d][%d]:- ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    int gretest = mat[0][0];
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < columns; j++) {
            printf(" %d ", mat[i][j]);
            if (gretest < mat[i][j]) gretest = mat[i][j];
        }
        printf("|\n");
    }
    
    printf("\nGretest Value = %d", gretest);
    return 0;
}