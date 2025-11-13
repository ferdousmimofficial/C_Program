// C program to check if a number is positive, negative or zero

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("The number is positive.\n");
    }else if(num < 0){
        printf("The number is negative.\n");
    }else{
        printf("Zero\n");
    }

    return 0;
}