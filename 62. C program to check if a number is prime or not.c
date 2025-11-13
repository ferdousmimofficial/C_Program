// C program to check if a number is prime (মৌলিক সংখ্যা)

#include <stdio.h>
#include <math.h>
int main()
{
    int num, i, count=0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(num <= 1){
        count++;
    }

    for(i=2; i<=sqrt(num); i++){
        if(num % i == 0){
            count++;
            break;
        }
    }

    if(count == 0){
        printf("%d is a prime number.\n", num);
    }else{
        printf("%d is not a prime number.\n", num);
    }

    return
}