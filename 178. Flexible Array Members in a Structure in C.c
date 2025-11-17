// Flexible Array Members in a Structure in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    int nSubjects;
    float marks[]; // Flexible array member
};

int main() {
    int nSubjects;
    printf("Enter number of subjects: ");
    scanf("%d", &nSubjects);

    // Allocate memory for structure + flexible array
    struct Student *s = malloc(sizeof(struct Student) + nSubjects * sizeof(float));
    s->id = 101;
    s->nSubjects = nSubjects;

    printf("Enter marks for %d subjects: ", nSubjects);
    for(int i = 0; i < nSubjects; i++)
        scanf("%f", &s->marks[i]);

    printf("\nStudent ID: %d\nMarks: ", s->id);
    for(int i = 0; i < nSubjects; i++)
        printf("%.2f ", s->marks[i]);
    printf("\n");

    free(s);
    return 0;
}
