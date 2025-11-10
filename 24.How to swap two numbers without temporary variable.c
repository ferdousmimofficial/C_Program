// How to swap two numbers without temporary variable

#include <stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 5;

    printf("Before swapping:\n num1 = %d\n num2 = %d\n", num1, num2);

    num1 = num1 - num2; //5
    num2 = num1 + num2; //10
    num1 = num2 - num1; //5

    printf("After swapping:\n num1 = %d\n num2 = %d\n", num1, num2);
    return 0;
}