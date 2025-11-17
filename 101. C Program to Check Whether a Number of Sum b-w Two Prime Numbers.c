// C Program to Check Whether a Number of Sum b-w Two Prime Numbers

#include <stdio.h>

// Function to check prime
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Try to split n into two primes i + (n-i)
    for(i = 2; i <= n/2; i++) {
        if(isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d (Both prime)\n", n, i, n - i);
            flag = 1;
            break;
        }
    }

    if(!flag)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);

    return 0;
}
