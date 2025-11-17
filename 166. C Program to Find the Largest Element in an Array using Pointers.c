// C Program to Find the Largest Element in an Array using Pointers

#include <stdio.h>

int main() {
    int arr[100], n, *ptr, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr; // Pointer to the first element
    max = *ptr;

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest element: %d\n", max);
    return 0;
}
