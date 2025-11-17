// C Program to Sort an Array using Pointers

#include <stdio.h>

int main() {
    int arr[100], n, *ptr, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr; // Pointer to first element

    // Bubble Sort using pointers
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)) {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    printf("\n");

    return 0;
}
