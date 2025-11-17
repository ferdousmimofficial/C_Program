// C Program to Rotate Matrix Elements

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n], temp;

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Rotate 90 degrees clockwise (in-place transpose + reverse rows)
    // Transpose
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n/2; j++) {
            temp = mat[i][j];
            mat[i][j] = mat[i][n-j-1];
            mat[i][n-j-1] = temp;
        }
    }

    printf("Matrix after 90° rotation:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
