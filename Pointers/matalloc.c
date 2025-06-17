#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr;
    int i;

    arr = (int **)malloc(1 * sizeof(int *));
   
    arr[0] = (int *)malloc(3 * sizeof(int));


    printf("Enter numbers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[0][i]);
    }

    // Display 
    printf("output\n");
    for (i = 0; i < 3; i++) {
        printf("%d ", arr[0][i]);
    }

    free(arr[0]);
    free(arr);

    return 0;
}
