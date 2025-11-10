// C Program to Find ASCII Value of a Character 

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c", &ch);

    printf("The ASCII value of %c is %d\n", ch, ch);

    return 0;
}