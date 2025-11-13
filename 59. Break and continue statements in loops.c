// Break and continue statements in loops

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i < 20; i++)
    {
        if (i % 3 == 0)
            continue; // Skip multiples of 3

        printf("%d\n", i);

        if(i == 10)
            break; // Exit loop when i is 10
    }

    return 0;
}