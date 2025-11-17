// C Program to Interchange Elements of First and Last in a Matrix across Rows

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

    // Swap first and last elements in each row
    for(int i = 0; i < rows; i++) {
        temp = mat[i][0];
        mat[i][0] = mat[i][cols-1];
        mat[i][cols-1] = temp;
    }

    printf("Matrix after swapping first and last elements of each row:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
