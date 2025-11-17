// C Program to Remove Leading Zeros

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *ptr;

    printf("Enter a number: ");
    scanf("%s", str);

    // Find first non-zero character
    ptr = str;
    while(*ptr == '0' && *(ptr+1) != '\0') {
        ptr++;
    }

    printf("Number without leading zeros: %s\n", ptr);
    return 0;
}
