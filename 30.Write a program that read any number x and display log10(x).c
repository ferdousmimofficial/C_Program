// Write a program that read any number x and display log10(x)

#include <stdio.h>
#include <math.h>
int main()
{
    double x,result;
    printf("Enter a number x: ");
    scanf("%lf",&x);

    result = log10(x);
    printf("log10(%.2lf) = %.2lf\n",x,result);

    return 0;
}