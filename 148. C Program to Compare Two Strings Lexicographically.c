// C Program to Compare Two Strings Lexicographically

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp(str1, str2);

    if(result == 0)
        printf("Both strings are equal.\n");
    else if(result < 0)
        printf("First string comes before second string.\n");
    else
        printf("First string comes after second string.\n");

    return 0;
}
