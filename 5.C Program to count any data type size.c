// C Program to count any data type size

#include <stdio.h>
int main() 
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int = %d bytes\n", sizeof(i));
    printf("Size of float = %d\n", sizeof(f));
    printf("Size of double = %d bytes\n", sizeof(d));
    printf("Size of char = %d byte\n", sizeof(c));
}