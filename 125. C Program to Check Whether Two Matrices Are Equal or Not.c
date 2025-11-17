// C Program to Check Whether Two Matrices Are Equal or Not

#include <stdio.h>

int main() {
    int rows, cols, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat2[i][j]);

    // Compare matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag)
        printf("Matrices are equal.\n");
    else
        printf("Matrices are not equal.\n");

    return 0;
}
