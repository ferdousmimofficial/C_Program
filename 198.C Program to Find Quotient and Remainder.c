// C Program to Find Quotient and Remainder

#include <stdio.h>

int main() {
    int dividend, divisor;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    
    return 0;
}
