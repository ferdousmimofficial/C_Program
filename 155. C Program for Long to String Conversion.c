// C Program for Long to String Conversion

#include <stdio.h>

int main() {
    long num;
    char str[50];

    printf("Enter a long number: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num); // Convert long to string

    printf("Long as string: %s\n", str);
    return 0;
}
