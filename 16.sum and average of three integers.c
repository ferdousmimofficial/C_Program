// sum and average of three integers

#include <stdio.h>
int main()
{
    int n1,n2,n3,sum;
    float avg;
    printf("Enter three integers: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    sum=n1+n2+n3;
    avg=float(sum/3);

    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",avg);

    return 0;
}