#include <stdio.h>

void flattenMatrix(int *src, int rows, int cols, int *dest) {
    int *p = src;       
    int *q = dest;      
    int total = rows * cols;

    for (int i = 0; i < total; i++) {
        *(q + i) = *(p + i);
    }
}

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int rows = 2, cols = 3;
    int flat[rows * cols];

   
    flattenMatrix((int *)matrix, rows, cols, flat);

       for (int i = 0; i < rows * cols; i++) {
        printf("%d ", *(flat + i));
    }

    return 0;
}
