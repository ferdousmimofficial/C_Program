// C Program for Char to Int Conversion

#include <stdio.h>

int main() {
    char ch;
    int num;

    printf("Enter a digit character (0-9): ");
    scanf(" %c", &ch);

    if(ch >= '0' && ch <= '9') {
        num = ch - '0'; // Convert to integer
        printf("Integer: %d\n", num);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
