// C program to calculate the area of a circle

#include <stdio.h>
int main()
{
    float r, area;

    printf("Enter radius = ");
    scanf("%f", &r);

    area = 3.1416 * r * r; // Area = πr²
    printf("Area = %.2f\n", area);

    return 0;
}