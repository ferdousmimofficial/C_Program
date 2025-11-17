// C Program to Print Inverted Hollow Star pyramid

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        // Print leading spaces
        for(j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print stars and hollow spaces
        for(j = 1; j <= (2*i - 1); j++) {
            if(j == 1 || j == 2*i - 1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}