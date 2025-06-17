//memory allocation
#include <stdio.h>
#include <stdlib.h>  

int main() {
    int *ptr, n, i;

    printf("Enter number of integers: ");
    scanf("%d", &n);

   
    ptr = (int *)malloc(n * sizeof(int));

    
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i); 
    }

    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }

    free(ptr);

    return 0;
}
