// How to swap two numbers with temporary variable

#include <stdio.h>
int main()
{
    int num1 = 5;
    int num2 = 10;
    int temp;

    printf("Before swapping:\n num1 = %d\n num2 = %d\n", num1, num2);

    temp = num1; // Store the value of num1 in temp
    num1 = num2; // Assign the value of num2 to num1
    num2 = temp; // Assign the value stored in temp to num2

    printf("After swapping:\n num1 = %d\n num2 = %d\n", num1, num2);
    return 0;
}