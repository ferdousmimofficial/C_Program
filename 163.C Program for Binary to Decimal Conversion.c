// C Program for Binary to Decimal Conversion

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[32];
    int decimal = 0, len;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    len = strlen(binary);
    for(int i = 0; i < len; i++) {
        if(binary[i] == '1') {
            decimal += (1 << (len - 1 - i)); // 2^(position)
        } else if(binary[i] != '0') {
            printf("Invalid binary number!\n");
            return 0;
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
