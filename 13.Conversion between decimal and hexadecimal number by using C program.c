// Conversion between decimal and hexadecimal number by using C program

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n); // decimal -> %d
    
    printf("The hexadecimal number is = %x\n", n); // hexadecimal -> %x

    return 0;
}