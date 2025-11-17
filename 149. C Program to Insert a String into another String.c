// C Program to Insert a String into another String

#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100], result[300];
    int pos;

    printf("Enter the main string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the string to insert: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter the position to insert (starting from 0): ");
    scanf("%d", &pos);

    if(pos < 0 || pos > strlen(str1)) {
        printf("Invalid position!\n");
        return 0;
    }

    // Copy first part of str1
    strncpy(result, str1, pos);
    result[pos] = '\0';

    // Concatenate str2 and remaining part of str1
    strcat(result, str2);
    strcat(result, str1 + pos);

    printf("Resulting string: %s\n", result);
    return 0;
}
