// Declare and initialize types of variables
#include <stdio.h>

int main() {
    // Variable declarations and initializations
    int age = 25;               // Integer
    float height = 5.9;        // Float 
    double salary = 55000.75;   // Double
    char grade = 'A';           // Character
    long population = 7800000000; // Long Integer
    short temperature = -10;    // Short Integer
    unsigned int points = 150;  // Unsigned Integer

    // Display the values
    printf("Integer (int): %d\n", age);
    printf("Float (float): %.2f\n", height);
    printf("Double (double): %.2lf\n", salary);
    printf("Character (char): %c\n", grade);
    printf("Long (long): %ld\n", population);
    printf("Short (short): %d\n", temperature);
    printf("Unsigned int: %u\n", points);

    return 0;
}
