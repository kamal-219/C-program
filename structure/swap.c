//swap 
#include <stdio.h>
struct Point {
    int x;
    int y;
};


void swapPoints(struct Point *p1, struct Point *p2) {
    struct Point temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    struct Point A = {10, 20};
    struct Point B = {30, 40};

    printf("Before swap:\n");
    printf("Point A: x = %d, y = %d\n", A.x, A.y);
    printf("Point B: x = %d, y = %d\n", B.x, B.y);

    swapPoints(&A, &B);

    printf("\nAfter swap:\n");
    printf("Point A: x = %d, y = %d\n", A.x, A.y);
    printf("Point B: x = %d, y = %d\n", B.x, B.y);

    return 0;
}


