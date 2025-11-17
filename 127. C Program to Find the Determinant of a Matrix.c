// C Program to Find the Determinant of a Matrix

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (2 or 3): ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int det;

    if(n == 2) {
        // Determinant of 2x2: ad - bc
        det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];
    } else if(n == 3) {
        // Determinant of 3x3 using Sarrus Rule
        det = mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1])
            - mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0])
            + mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    } else {
        printf("This program supports only 2x2 or 3x3 matrices.\n");
        return 0;
    }

    printf("Determinant = %d\n", det);

    return 0;
}
