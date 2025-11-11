// Write a program that reads any angle t and display cos(t)

#include <stdio.h>
#include <math.h>
int main()
{
    double t, result;
    printf("Enter an angle t (in radians): ");
    scanf("%lf", &t);

    result = cos(t);
    printf("cos(%.2lf) = %.2lf\n", t, result);

    return 0;
}