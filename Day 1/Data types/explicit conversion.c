#include <stdio.h>

int main() {
    float f;
    int i;

    printf("Enter a float value: ");
    scanf("%f", &f);

    i = (int)f; // Explicit type casting

    printf("Original float value: %.2f\n", f);
    printf("Converted integer value: %d\n", i);

    return 0;
}
