// C Program to Make a File Read-Only

#include <stdio.h>
#include <sys/stat.h>

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    // Change file permissions to read-only (owner)
    if(chmod(filename, S_IREAD) == 0)
        printf("File is now read-only.\n");
    else
        printf("Error setting file as read-only!\n");

    return 0;
}
