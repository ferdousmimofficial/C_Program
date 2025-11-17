// C Program to Create a Temporary File

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[L_tmpnam];

    // Generate a temporary filename
    tmpnam(filename);
    printf("Temporary file name: %s\n", filename);

    // Open the temporary file
    fp = fopen(filename, "w+");
    if(fp == NULL) {
        printf("Error creating temporary file!\n");
        return 1;
    }

    // Write to the temporary file
    fprintf(fp, "Hello, temporary file!\n");

    // Move pointer to start
    rewind(fp);

    // Read and display content
    char ch;
    printf("File content:\n");
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    remove(filename); // Delete temporary file
    printf("Temporary file deleted.\n");

    return 0;
}
