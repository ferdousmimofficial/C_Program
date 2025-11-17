// C Program to Find the Sum of Natural Numbers using Recursion

#include <stdio.h>

// Recursive function to find sum
int sum(int n) {
    if(n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", sum(n));

    return 0;
}
