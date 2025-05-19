#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Overflow of signed char
    char c = 127;  // Max value of signed char
    printf("Before overflow (char): %d\n", c);
    c += 1;  // Overflow happens here
    printf("After overflow (char): %d\n\n", c);

    // Overflow of unsigned int
    unsigned int u = UINT_MAX;  // Max value of unsigned int
    printf("Before overflow (unsigned int): %u\n", u);
    u += 1;  // Overflow to 0
    printf("After overflow (unsigned int): %u\n\n", u);

    // Overflow of float
    float f = FLT_MAX;  // Maximum finite value for float
    printf("Before overflow (float): %e\n", f);
    f *= 100.0f;  // Try to go beyond max
    printf("After overflow (float): %e\n", f);  // Typically results in "inf"

    return 0;
}
