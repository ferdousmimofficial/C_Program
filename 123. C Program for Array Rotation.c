// C Program for Array Rotation

#include <stdio.h>

int main() {
    int n, d, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    // Left rotation
    for(int i = 0; i < d; i++) {
        temp = arr[0];
        for(int j = 0; j < n-1; j++)
            arr[j] = arr[j+1];
        arr[n-1] = temp;
    }

    printf("Array after rotation:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
