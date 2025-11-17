// C Program to Determine the Unicode Code Point at a Given Index

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    printf("Enter the index (starting from 0): ");
    scanf("%d", &index);

    int len = strlen(str);
    if(index < 0 || index >= len) {
        printf("Invalid index!\n");
    } else {
        printf("Character at index %d: %c\n", index, str[index]);
        printf("Unicode code point: %d\n", (int)str[index]);
    }

    return 0;
}
