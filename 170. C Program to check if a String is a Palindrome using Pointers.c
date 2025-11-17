// C Program to check if a String is a Palindrome using Pointers

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], *start, *end;
    int flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    // Initialize pointers
    start = str;
    end = str + strlen(str) - 1;

    // Check palindrome
    while(start < end) {
        if(tolower(*start) != tolower(*end)) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
