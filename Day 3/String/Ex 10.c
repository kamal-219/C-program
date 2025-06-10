#include <stdio.h>
#define x 4

int main() {
    int i, j;
    char mat[x][x] = {
        {'a', 'b','c','d'},
        {'e', 'f', 'g','h'},
        {'i','j','k','l'},
        {'m','n','o','p'}
    };
    
    int result[x][x] = {0};

   
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            result[j][x - i - 1] = mat[i][j];
        }
    }

   
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            mat[i][j] = result[i][j];
        }
    }

    printf("Rotated Matrix :\n");
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("%c\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
