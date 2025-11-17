// C Program to Draw a Circle in Graphics

#include <graphics.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    int x = 200, y = 200, radius = 100;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    // Draw a circle
    circle(x, y, radius);

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}
