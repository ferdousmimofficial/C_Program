// C Program to Show Types of errors

#include <stdio.h>

int main() {
    // 1. Syntax Error (uncomment to see)
    // printf("Hello World"  // Missing closing parenthesis

    // 2. Semantic / Logical Error
    int a = 5, b = 0;
    int sum = a - b; // Should be addition, but used subtraction

    printf("Sum (logical error example): %d\n", sum);

    // 3. Runtime Error (uncomment to see)
    // int c = a / b; // Division by zero

    printf("Program demonstrating different types of errors.\n");
    return 0;
}
