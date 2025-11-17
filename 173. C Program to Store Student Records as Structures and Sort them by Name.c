// C Program to Store Student Records as Structures and Sort them by Name

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n], temp;

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf(" %[^\n]s", students[i].name); // read string with spaces
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort by name using simple bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(strcmp(students[j].name, students[j+1].name) > 0) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Print sorted students
    printf("\nStudents sorted by name:\n");
    for(int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", 
               students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}
