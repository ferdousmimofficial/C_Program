// Control statement - conditional statement , loop control statement 
// conditional control statement - if-else , switch
// loop control statement - for , while , do-while
// if-else statement:

// C Program to Check Whether Number is Even or Odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("%d is Even", num);
    }else{
        printf("%d is Odd", num);
    }

    return 0;
}