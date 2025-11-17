// C Program to Get a Non-Repeating Character from the Given String

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // ASCII frequency

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // remove newline

    // Count frequency of each character
    for(int i = 0; str[i]; i++)
        freq[(int)str[i]]++;

    // Find first non-repeating character
    for(int i = 0; str[i]; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
