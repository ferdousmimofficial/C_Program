// C Program to check if the string is palindrome or not

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    len = strlen(str);

    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
