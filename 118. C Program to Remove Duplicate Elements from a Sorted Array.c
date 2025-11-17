// C Program to Remove Duplicate Elements from a Sorted Array

#include <stdio.h>

int main() {
    int n, j = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Remove duplicates
    int result[n];
    result[0] = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) {
            j++;
            result[j] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for(int i = 0; i <= j; i++)
        printf("%d ", result[i]);

    return 0;
}
