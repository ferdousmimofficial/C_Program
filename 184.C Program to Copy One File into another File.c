// C Program to Copy One File into another File

#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *src, *dst;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    src = fopen(source, "r");
    if(src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dst = fopen(dest, "w");
    if(dst == NULL) {
        printf("Error creating destination file!\n");
        fclose(src);
        return 1;
    }

    // Copy contents
    while((ch = fgetc(src)) != EOF)
        fputc(ch, dst);

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dst);
    return 0;
}
