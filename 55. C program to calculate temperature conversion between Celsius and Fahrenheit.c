// C program to calculate temperature conversion between Celsius and Fahrenheit

#include <stdio.h>
int main()
{
    int choice;
    float temp, convertedTemp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            convertedTemp = (temp * 1.8) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemp);
            break;
        case 2: 
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            convertedTemp = (temp - 32) / 1.8;
            printf("Temperature in Celsius: %.2f\n", convertedTemp);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}