// C Program to Find the Normal and Trace

#include <stdio.h>
#include <math.h>

int main() {
    int rows, cols;
    double sumSquares = 0, norm;
    int trace = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sumSquares += mat[i][j] * mat[i][j]; // sum of squares for norm
            if(i == j) trace += mat[i][j];       // diagonal sum for trace
        }
    }

    norm = sqrt(sumSquares);

    printf("Trace = %d\n", trace);
    printf("Norm (Frobenius) = %.2f\n", norm);

    return 0;
}
