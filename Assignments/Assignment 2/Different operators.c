#include <stdio.h>
int main() {
    // Declare variables
    int a = 10, b = 5;
    int sum, diff, product, quotient, remainder;
    int isEqual, isGreater, isLess;
    int result;

    // Arithmetic Operators
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("Arithmetic Operations:\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n\n", remainder);

    // Relational Operators
    isEqual = (a == b);
    isGreater = (a > b);
    isLess = (a < b);

    printf("Relational Operations:\n");
    printf("a == b: %d\n", isEqual);
    printf("a > b: %d\n", isGreater);
    printf("a < b: %d\n\n", isLess);

    // Logical Operators
    result = (a > b) && (b > 0);  // Logical AND
    printf("Logical AND (a > b && b > 0): %d\n", result);

    result = (a < b) || (b > 0);  // Logical OR
    printf("Logical OR (a < b || b > 0): %d\n", result);

    result = !(a == b);           // Logical NOT
    printf("Logical NOT (!(a == b)): %d\n", result);

    return 0;
}
