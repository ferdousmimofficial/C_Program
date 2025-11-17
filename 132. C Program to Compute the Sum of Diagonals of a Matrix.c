// C Program to Compute the Sum of Diagonals of a Matrix

#include <stdio.h>

int main() {
    int n, primary = 0, secondary = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < n; i++) {
        primary += mat[i][i];           // Primary diagonal
        secondary += mat[i][n-i-1];     // Secondary diagonal
    }

    printf("Sum of primary diagonal = %d\n", primary);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}
