// Fahrenheit to Celsius conversion program in C

#include <stdio.h>
int main()
{
    float F,C;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;
    printf("Temperature in Centigrade: %.2f\n", C);

    return 0;
}