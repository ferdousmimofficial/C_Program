// C Program to Print Reverse Floyd pattern Triangle Pyramid

#include <stdio.h>

int main() {
    int n, total = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Calculate total numbers in Floyd's triangle
    for(int i = 1; i <= n; i++)
        total += i;

    // Print Reverse Floyd's triangle
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", total);
            total--;
        }
        printf("\n");
    }

    return 0;
}
