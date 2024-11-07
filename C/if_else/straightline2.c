#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x-coordinate: ");
    scanf("%d", &x);

    printf("Enter the y-coordinate: ");
    scanf("%d", &y);

    if (x == 0 && y == 0) {
        printf("The point (%d, %d) lies at the origin.", x, y);
    } else if (x == 0) {
        printf("The point (%d, %d) lies on the y-axis.", x, y);
    } else if (y == 0) {
        printf("The point (%d, %d) lies on the x-axis.", x, y);
    } else {
        printf("The point (%d, %d) does not lie on any axis.", x, y);
    }

    return 0;
}
