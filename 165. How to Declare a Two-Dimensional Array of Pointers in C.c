// How to Declare a Two-Dimensional Array of Pointers in C?

#include <stdio.h>

int main() {
    int *arr[3][4]; // 2D array of pointers to int

    int a = 10, b = 20, c = 30, d = 40;

    arr[0][0] = &a;
    arr[0][1] = &b;
    arr[0][2] = &c;
    arr[0][3] = &d;

    printf("Value at arr[0][1]: %d\n", *arr[0][1]);

    return 0;
}
