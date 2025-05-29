//demonstrate the use of keywords, operators, and constants in a single program.

#include <stdio.h>  
#define PI 3.14159   
int main() {         
    const float RATE = 0.05;  
    int radius = 10;          
    float area;

    // Arithmetic Operator
    area = PI * radius * radius;

    // Relational Operator
    if (area > 100) {
        // Logical Operator
        if ((radius > 5) && (RATE < 0.1)) {
            printf("Area is large and rate is acceptable.\n");
        }
    } else {
        printf("Area is small.\n");
    }

    // Display constants and result
    printf("Radius = %d\n", radius);
    printf("Area = %.2f\n", area);
    printf("Rate = %.2f\n", RATE);
    printf("PI = %.5f\n", PI);

    return 0;  
}
