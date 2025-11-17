// C Program for Float to String Conversion

#include <stdio.h>

int main() {
    float num;
    char str[50];

    printf("Enter a float number: ");
    scanf("%f", &num);

    sprintf(str, "%f", num); // Convert float to string

    printf("Float as string: %s\n", str);
    return 0;
}
