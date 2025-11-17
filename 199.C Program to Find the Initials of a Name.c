// C Program to Find the Initials of a Name

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    printf("%c", toupper(name[0])); // first character

    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && name[i+1] != '\0') {
            printf("%c", toupper(name[i+1]));
        }
    }

    printf("\n");
    return 0;
}
