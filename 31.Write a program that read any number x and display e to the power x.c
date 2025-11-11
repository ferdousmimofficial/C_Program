// Write a program that read any number x and display e to the power x

#include <stdio.h>
#include <math.h>
int main()
{
    double x, result;

    printf("Enter a number x: ");
    scanf("%lf", &x);

    result = exp(x);
    printf("e^(%.2lf) = %.2lf\n", x, result);
    return 0;
}