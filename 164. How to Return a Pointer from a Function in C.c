// How to Return a Pointer from a Function in C

#include <stdio.h>

int* getPointer() {
    static int num = 10; // Use static to avoid local variable disappearing
    return &num;          // Return pointer to num
}

int main() {
    int *ptr = getPointer();
    printf("Value: %d\n", *ptr);
    return 0;
}
