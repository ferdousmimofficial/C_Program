// Conversion between decimal and Octal number by using C program

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n); // decimal -> %d

    printf("The octal number is: %o\n", n); // octal -> %o

    return 0;
}
