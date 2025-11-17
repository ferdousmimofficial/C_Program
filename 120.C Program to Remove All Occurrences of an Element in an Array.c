// C Program to Remove All Occurrences of an Element in an Array

#include <stdio.h>

int main() {
    int n, x, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &x);

    int result[n]; // array to store remaining elements
    for(int i = 0; i < n; i++) {
        if(arr[i] != x) {
            result[j] = arr[i];
            j++;
        }
    }

    printf("Array after removing %d:\n", x);
    for(int i = 0; i < j; i++)
        printf("%d ", result[i]);

    return 0;
}
