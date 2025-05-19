//Determine the nature of roots
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant;

    // Input coefficients
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Determine the nature of the roots
    if (discriminant > 0) {
        printf("The roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("The roots are real and equal.\n");
    } else {
        printf("The roots are imaginary (complex).\n");
    }

    return 0;
}
