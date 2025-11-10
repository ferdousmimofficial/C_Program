// Conversion from lowercase to uppercase using c program (with library function)

#include <stdio.h>
int main()
{
    char lower, upper;
    printf("Enter a lowercase character: ");
    scanf("%c", &lower);

    upper = toupper(lower);
    printf("The uppercase character = %c\n", upper);

    return 0;
}