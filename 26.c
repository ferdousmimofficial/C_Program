// Write a program that read any integer and display its absolute value (পরম মান).

#include <stdio.h>
int main()
{
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", &num);

    result = abs(num);
    
    printf("Absolute value = %d\n", result);

    return 0;
}