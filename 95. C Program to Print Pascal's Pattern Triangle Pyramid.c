// C Program to Print Pascal's Pattern Triangle Pyramid

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate combination nCr
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        // Print spaces
        for(int j = 0; j < n - i - 1; j++)
            printf(" ");

        // Print numbers
        for(int j = 0; j <= i; j++)
            printf("%d ", combination(i, j));

        printf("\n");
    }

    return 0;
}
