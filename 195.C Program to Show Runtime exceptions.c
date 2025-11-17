// C Program to Show Runtime exceptions

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 0;
    int *ptr = NULL;

    // Runtime Exception 1: Division by zero
    printf("Trying division by zero...\n");
    // Uncommenting the next line will cause runtime error
    // int c = a / b; 

    // Runtime Exception 2: Dereferencing NULL pointer
    printf("Trying to access NULL pointer...\n");
    // Uncommenting the next line will cause runtime error
    // printf("%d\n", *ptr);

    printf("Runtime exceptions demonstration complete (lines commented to prevent crash).\n");
    return 0;
}
