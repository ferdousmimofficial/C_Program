// C program to make a calculator using switch

#include <stdio.h>
int main()
{
    double num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator)
    {
        case '+':
        {
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
            break;
        }
        case '-':
        {
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
            break;
        }
        case '*':
        {
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
            break;
        }
        case '/':
        {
            if(num2 != 0){
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
            }else{
                printf("Error: Division by zero is not allowed.\n");
            }

            break;
        }
        default:
        {
            printf("Error: Invalid operator.\n");
        }
    }

    return 0;
}