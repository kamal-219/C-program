//demonstrates the difference in memory usage and behavior of struct and Union
#include <stdio.h>
#include <string.h>

// Define a struct with three members
struct MyStruct {
    int x;
    float y;
    char z;
};

// Define a union with the same members
union MyUnion {
    int x;
    float y;
    char z;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    // Assign values to struct
    s.x = 10;
    s.y = 20.5;
    s.z = 'A';

    // Assign values to union
    u.x = 10;
    u.y = 20.5;
    u.z = 'A';

    // Print struct values
    printf("STRUCT VALUES:\n");
    printf("x = %d\n", s.x);
    printf("y = %.2f\n", s.y);
    printf("z = %c\n", s.z);
    printf("Size of struct = %lu bytes\n", sizeof(s));

    // Print union values
    printf("\nUNION VALUES:\n");
    printf("x = %d\n", u.x);
    printf("y = %.2f\n", u.y);
    printf("z = %c\n", u.z);
    printf("Size of union = %lu bytes\n", sizeof(u));

    return 0;
}


