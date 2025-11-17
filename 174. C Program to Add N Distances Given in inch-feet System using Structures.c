// C Program to Add N Distances Given in inch-feet System using Structures

#include <stdio.h>

struct Distance {
    int feet;
    float inch;
};

int main() {
    int n;
    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance d, sum = {0, 0};

    for(int i = 0; i < n; i++) {
        printf("Enter distance %d (feet inch): ", i+1);
        scanf("%d %f", &d.feet, &d.inch);

        sum.feet += d.feet;
        sum.inch += d.inch;

        // Convert inches to feet if >= 12
        if(sum.inch >= 12) {
            sum.feet += (int)(sum.inch / 12);
            sum.inch = (int)sum.inch % 12 + (sum.inch - (int)sum.inch);
        }
    }

    printf("Total distance = %d feet %.2f inches\n", sum.feet, sum.inch);
    return 0;
}
