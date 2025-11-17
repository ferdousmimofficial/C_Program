// C Program for String to Long Conversion

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[50];
    long num;

    printf("Enter a number as string: ");
    scanf("%s", str);

    num = strtol(str, NULL, 10); // Convert string to long

    printf("Long integer: %ld\n", num);
    return 0;
}
