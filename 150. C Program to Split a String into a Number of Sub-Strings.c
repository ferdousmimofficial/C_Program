// C Program to Split a String into a Number of Sub-Strings

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *token;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Sub-strings:\n");
    token = strtok(str, " "); // split by space
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
