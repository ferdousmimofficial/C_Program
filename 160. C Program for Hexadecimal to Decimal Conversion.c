// C Program for Hexadecimal to Decimal Conversion

#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex[20];
    int decimal;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    decimal = (int)strtol(hex, NULL, 16); // Convert hex to decimal

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
