// C Program to print all the Patterns that Match Given Pattern from a File

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100], pattern[100], line[200];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter pattern to search: ");
    scanf("%s", pattern);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Lines containing '%s':\n", pattern);
    while(fgets(line, sizeof(line), fp)) {
        if(strstr(line, pattern) != NULL)
            printf("%s", line);
    }

    fclose(fp);
    return 0;
}
