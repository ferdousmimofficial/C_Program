// C Program For Boolean to String Conversion

#include <stdio.h>

int main() {
    int boolean;
    char str[6]; // "true" or "false"

    printf("Enter boolean value (0 or 1): ");
    scanf("%d", &boolean);

    if(boolean == 1)
        sprintf(str, "true");
    else
        sprintf(str, "false");

    printf("Boolean as string: %s\n", str);
    return 0;
}
