// Series (1 + 1/2 + 1/3 + .... + 1/n)

#include<stdio.h>
int main()
{
    int n, i;
    double sum=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum = sum + (1.0/i);
    }

    printf("1 + 1/2 + 1/3 + .... + 1/%d = %.4lf\n",n,sum);

    return 0;
}