//demonstrate the immutability of constant variables.
#include <stdio.h>

int main() {
    const int MAX_VALUE = 200;  // Step 1: Declare and initialize a constant variable

    printf("Initial value of constant MAX_VALUE: %d\n", MAX_VALUE);  // Step 2: Display the constant value

    // Step 3: Try to modify the constant (uncomment to see error)
    // MAX_VALUE = 200; 
    return 0;
}
