// print, count and sum of prime numbers from m to n

#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, num, i, count = 0, totalPrime = 0, SumOfprime = 0;

    printf("Enter starting number: ");
    scanf("%d", &m);
    printf("Enter ending number: ");
    scanf("%d", &n);

    for (num = m; num <= n; num++)
    {
        if (num <= 1)
        {
            continue;
        }


        count = 0;
        for (i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }


        if (count == 0)
        {
            printf("%d\t", num);
            totalPrime++;
            SumOfprime = SumOfprime + num;
        }
    }
    printf("\nTotal Prime Number: %d\n", totalPrime);
    printf("Sum of Prime Number: %d\n", SumOfprime);

    return 0;
}
