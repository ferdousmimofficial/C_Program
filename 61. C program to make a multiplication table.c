// C program to make a multiplication table

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d is:\n", num);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    return 0;
}