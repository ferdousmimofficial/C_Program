// C Program to Calculate the Average of All the Elements Present in an Array

#include <stdio.h>

int main() {
    int n;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add to sum while reading
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);

    return 0;
}
