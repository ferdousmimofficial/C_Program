// Counting number of a digit in an integer

#include <stdio.h>

int main()
{
    int num, temp, count = 0;

    printf("Enter any number : ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    printf("Total digits = %d", count);

    return 0;
}