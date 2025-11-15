// Strong number

#include <stdio.h>

int main()
{
    int num, temp, r, fact, sum = 0;

    printf("Enter any number : ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        r = temp % 10;

        fact = 1;
        for (int i = 1; i <= r; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (num == sum)
        printf("Strong number");
    else
        printf("Not Strong number");

    return 0;
}