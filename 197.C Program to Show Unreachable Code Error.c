// C Program to Show Unreachable Code Error

#include <stdio.h>

int main() {
    printf("This line is reachable.\n");

    return 0;

    // Unreachable code
    printf("This line will never execute.\n");

    return 0;
}
