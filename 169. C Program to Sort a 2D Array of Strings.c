// C Program to Sort a 2D Array of Strings

#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][20]; // 5 strings, each max 19 chars
    char temp[20];
    int n = 5;

    printf("Enter 5 strings:\n");
    for(int i = 0; i < n; i++)
        scanf("%s", arr[i]);

    // Sort strings using bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
