// C program to find the area of ​​a triangle (given the lengths of its three sides)

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle = %.2lf\n", area);

    return 0;
}