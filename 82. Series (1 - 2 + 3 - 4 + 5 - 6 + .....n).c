// Series (1 - 2 + 3 - 4 + 5 - 6 + .....n)
// Series (1 + 3 + 5 + ...) - (2 + 4 + 6 + ...)

#include<stdio.h>
int main()
{
    int n, i, even=0, odd=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(i%2==0){
            even = even + i;
        }else{
            odd = odd + i;
        }
    }
    printf("1 - 2 + 3 - 4 + 5 - 6 + .....%d = %d\n", n, odd-even);

    return 0;
}
