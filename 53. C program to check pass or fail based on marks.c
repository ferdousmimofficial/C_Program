// C program to check pass or fail based on marks

#include <stdio.h>
int main()
{
    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark >= 33){
        printf("Pass");
    }else{
        printf("Fail");
    }

    return 0;

}