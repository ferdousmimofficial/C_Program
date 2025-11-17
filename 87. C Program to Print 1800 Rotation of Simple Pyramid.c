// C Program to Print 1800 Rotation of Simple Pyramid

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print spaces before stars
        for(j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}