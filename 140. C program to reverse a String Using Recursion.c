// C program to reverse a String Using Recursion

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if(start >= end)
        return;
    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    int len = strlen(str);
    reverse(str, 0, len - 1);

    printf("Reversed string: %s\n", str);
    return 0;
}
