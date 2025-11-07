// Conversion from uppercase to lowercase using c program (using ASCII values)

#include <stdio.h>
int main()
{
    char upper;
    printf("Enter an uppercase character: ");
    scanf("%c", &upper); // A = 65

    printf("The lowercase character is: %c\n", upper+32); // a = 97

    return 0;
}