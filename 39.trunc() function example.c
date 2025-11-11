// trunc() function example

#include <stdio.h>
#include <math.h>
int main()
{
    double x,result;
    printf("Enter a number x: ");
    scanf("%lf",&x);

    result = trunc(x);
    printf("trunc(%.2lf) = %.2lf\n",x,result);

    return 0;
}