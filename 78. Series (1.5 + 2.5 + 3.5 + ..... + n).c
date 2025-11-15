// Series (1.5 + 2.5 + 3.5 + ..... + n)

#include<stdio.h>
int main()
{
    float n, i, sum=0;

    printf("Enter n: ");
    scanf("%f",&n);

    for(i=1.5; i<=n; i++){
        sum = sum + i;
    }

    printf("1.5 + 2.5 + 3.5 + .... + %.1f = %.1f\n",n,sum);

    return 0;
}