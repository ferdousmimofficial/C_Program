// display the series (2 4 6 .... n)

#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2){
        printf("%d ",i);
    }

    return 0;
}