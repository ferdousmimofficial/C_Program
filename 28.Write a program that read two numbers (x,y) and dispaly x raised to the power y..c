// Write a program that read two numbers (x,y) and dispaly x raised to the power y.

#include <stdio.h>
#include <math.h>
int main()
{
    int x,y;
    double result;

    printf("Enter base number x: ");
    scanf("%d", &x);

    printf("Enter exponent number y: ");
    scanf("%d", &y);

    result = pow(x,y);
    printf("%d raised to the power %d = %.2lf\n", x, y, result);

    return 0;
}