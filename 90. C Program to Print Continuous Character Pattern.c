// C Program to Print Continuous Character Pattern

#include <stdio.h>

int main() {
    int i, j, n;
    char ch = 'A';  // starting character

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // move to next character
        }
        printf("\n");
    }

    return 0;
}