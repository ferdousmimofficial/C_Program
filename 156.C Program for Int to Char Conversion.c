// C Program for Int to Char Conversion

#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter an integer (0-9): ");
    scanf("%d", &num);

    if(num >= 0 && num <= 9) {
        ch = num + '0'; // Convert to character
        printf("Character: %c\n", ch);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
