// Write a program that read any positive integer and display sum of digit

#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("Sum of %d = %d\n", num, sum);

    return 0;
}