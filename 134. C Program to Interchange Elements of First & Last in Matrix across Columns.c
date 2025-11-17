// C Program to Interchange Elements of First & Last in Matrix across Columns

#include <stdio.h>

int main() {
    int rows, cols, temp;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    // Swap first and last elements in each column
    for(int j = 0; j < cols; j++) {
        temp = mat[0][j];
        mat[0][j] = mat[rows-1][j];
        mat[rows-1][j] = temp;
    }

    printf("Matrix after swapping first and last elements of each column:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
