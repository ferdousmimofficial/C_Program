// Series (1.2 + 2.3 + 3.4 + .... + n1.n2)

#include<stdio.h>
int main()
{
    int n1, n2, i=1, j=2, sum=0;

    printf("Enter n1 , n2 : ");
    scanf("%d %d",&n1,&n2);

    while(i<=n1 && j<=n2){
        sum = sum + i*j;
        i = i + 1;
        j = j + 1;
    }

    printf("1*2 + 2*3 + 3*4 + .... + %d*%d = %d\n",n1,n2,sum);

    return 0;
}