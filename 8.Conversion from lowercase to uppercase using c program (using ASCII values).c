// Conversion from lowercase to uppercase using c program (using ASCII values)

#include <stdio.h>
int main()
{
    char lower;
    printf("Enter a lowercase character: ");
    scanf("%c", &lower); // a = 97

    printf("The uppercase character is: %c\n",lower-32); // A =65

    return 0;
}