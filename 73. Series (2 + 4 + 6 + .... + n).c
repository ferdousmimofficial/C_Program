// Series (2 + 4 + 6 + .... + n)

#include<stdio.h>
int main()
{
    int n, i=2, sum=0;
    printf("Enter the last number of the series: ");
    scanf("%d",&n);

    while(i<=n){
        sum = sum + n;
        i = i + 2;
    }
    
    printf("2 + 4 + 6 + .... + %d = %d\n",n,sum);

    return 0;
}