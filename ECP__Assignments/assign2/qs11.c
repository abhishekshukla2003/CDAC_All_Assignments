#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x coordinate: ");
    scanf("%d", &x);

    printf("Enter y coordinate: ");
    scanf("%d", &y);

    if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the ORIGIN.\n", x, y);
    }
    else if (x == 0) {
        printf("The point (%d, %d) lies on the Y-AXIS.\n", x, y);
    }
    else if (y == 0) {
        printf("The point (%d, %d) lies on the X-AXIS.\n", x, y);
    }
    else if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in the FIRST QUADRANT.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in the SECOND QUADRANT.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in the THIRD QUADRANT.\n", x, y);
    }
    else {
        printf("The point (%d, %d) lies in the FOURTH QUADRANT.\n", x, y);
    }

    return 0;
}

