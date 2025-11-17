// C Program to Read or Write Structure to a File

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;

    // Input student details
    printf("Enter name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Write structure to file
    fp = fopen("student.dat", "wb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    // Read structure from file
    fp = fopen("student.dat", "rb");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("\nStudent Record from file:\n");
    printf("Name: %s\nAge: %d\nMarks: %.2f\n", s.name, s.age, s.marks);

    return 0;
}
