// C Program to Store Student Records as Structures and Sort them by Age or id

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int id;
};

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n], temp;

    // Input student details
    for(int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Enter age: ");
        scanf("%d", &students[i].age);
        printf("Enter ID: ");
        scanf("%d", &students[i].id);
    }

    printf("\nSort by: 1. Age  2. ID\nEnter choice: ");
    scanf("%d", &choice);

    // Sort using bubble sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            int swap = 0;
            if(choice == 1 && students[j].age > students[j+1].age)
                swap = 1;
            else if(choice == 2 && students[j].id > students[j+1].id)
                swap = 1;

            if(swap) {
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    // Print sorted students
    printf("\nSorted student records:\n");
    for(int i = 0; i < n; i++)
        printf("Name: %s, Age: %d, ID: %d\n", students[i].name, students[i].age, students[i].id);

    return 0;
}
