// Conversion from uppercase to lowercase using c program (with library function)

#include <stdio.h>
int main()
{
    char upper, lower;
    printf("Enter an uppercase character: ");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("The lowercase character = %c\n", lower);

    return 0;
}