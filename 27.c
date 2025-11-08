// Write a program that read any number and display its square root.

#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    double result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sqrt(num);
    printf("Square root = %.2lf\n", result);

    return 0;
}