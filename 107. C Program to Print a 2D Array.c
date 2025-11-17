// C Program to Print a 2D Array

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements
    printf("\nEnter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print array
    printf("\nThe 2D Array is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
