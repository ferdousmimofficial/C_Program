// Unary Operators in C

#include <stdio.h>
int main()
{
    int x = 10;
    int result = +x;
    printf("The result of unary plus operator on x is: %d\n", result);

    result = -x;
    printf("The result of unary minus operator on x is: %d\n", result);

    int y = ++x;
    printf("The value of y after pre-incrementing x is: %d\n", y); // 11
    printf("The value of x after pre-increment is: %d\n", x); // 11

    y = x++;
    printf("The value of y after post-incrementing x is: %d\n", y); // 11
    printf("The value of x after post-increment is: %d\n", x); // 12

    y = --x;
    printf("The value of y after pre-decrementing x is: %d\n", y); // 11
    printf("The value of x after pre-decrement is: %d\n", x); // 11

    y = x--;
    printf("The value of y after post-decrementing x is: %d\n", y); // 11
    printf("The value of x after post-decrement is: %d\n", x); // 10

}