// Goto statement

#include <stdio.h>
int main()
{
    int i = 1;
    
level1:
    printf("%d\t", i);
    i++;

    if(i<10)
        goto level1;

    return 0;
}