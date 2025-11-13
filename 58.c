// Loop: for, while, do-while

#include <stdio.h>
int main()
{   
    // For Loop
    int i;
    for(i=1; i<=5; i++) // for(initialization; condition; increment/decrement)
    {
        printf("C programming\n");
    }



    // While Loop
    int j=1; // initialization;
    while(j<=10) // condition;
    {
        printf("%d\n", j);
        j++; // increment/decrement;
    }



    // Do-While loop
    int k=1; // initialization;
    do
    {
        printf("Hello\n");
        k++; // increment/decrement;
    }while(k<=5); // condition;
}
