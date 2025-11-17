// C Program to Check Prime Number by Creating a Function

#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    if(n <= 1) return 0;      // 0 and 1 are not prime
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;        // Not prime
    }
    return 1;                // Prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}