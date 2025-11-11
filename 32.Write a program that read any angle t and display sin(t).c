// Write a program that read any angle t and display sin(t)
#include <stdio.h>
#include <math.h>
int main()
{
    double t, result;
    printf("Enter an angle t (in radians): ");
    scanf("%lf", &t);

    result = sin(t);
    printf("sin(%.2lf) = %.2lf\n", t, result);

    return 0;
}