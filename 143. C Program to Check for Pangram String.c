// C Program to Check for Pangram String

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int alphabet[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i]; i++) {
        if(isalpha(str[i])) {
            int index = tolower(str[i]) - 'a';
            alphabet[index] = 1;
        }
    }

    int pangram = 1;
    for(int i = 0; i < 26; i++) {
        if(alphabet[i] == 0) {
            pangram = 0;
            break;
        }
    }

    if(pangram)
        printf("The string is a pangram.\n");
    else
        printf("The string is not a pangram.\n");

    return 0;
}
