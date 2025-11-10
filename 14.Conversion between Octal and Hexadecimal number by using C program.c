// Conversion between Octal and Hexadecimal number by using C program

#include <stdio.h>
int main()
{
    int n; 
    printf("Enter an octal number: ");
    scanf("%o", &n); // octal -> %o

    printf("The hexadecimal number is = %x\n", n); // hexadecimal -> %x

    return 0;
}