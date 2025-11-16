// Lucas Series

#include <stdio.h>
int main()
{
    int n, first = 2, second = 1, next;

    printf("Enter Range: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i == 1)
            next = 2;
        else if(i == 2)
            next = 1;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    return 0;
}