// C Program to Calculate the Factorial of a Number Using Recursion

#include <stdio.h>

// Recursive function to find factorial
int fact(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));

    return 0;
}
