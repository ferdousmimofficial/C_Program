// C Program to Print the First Letter of Each Word

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("First letters of each word: ");
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if(i == 0 && !isspace(str[i])) // first character
            printf("%c ", str[i]);
        else if(isspace(str[i]) && str[i+1] != '\0' && !isspace(str[i+1]))
            printf("%c ", str[i+1]);
    }

    printf("\n");
    return 0;
}
