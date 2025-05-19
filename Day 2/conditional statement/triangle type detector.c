// Triangle type detector
#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for triangle validity using triangle inequality
    if ((a + b > c) && (b + c > a) && (c + a > b)) {

        // Type by sides
        if (a == b && b == c) {
            printf("Triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles.\n");
        } else {
            printf("Triangle is Scalene.\n");
        }

        // Type by angle (check for right-angled using Pythagoras)
        // First, identify the largest side as the hypotenuse candidate
        int max = a;
        int x = b, y = c;

        if (b > max) {
            max = b;
            x = a; y = c;
        }
        if (c > max) {
            max = c;
            x = a; y = b;
        }

        if (max * max == x * x + y * y) {
            printf("Triangle is also Right-angled.\n");
        }

    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
