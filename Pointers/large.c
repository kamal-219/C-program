//Find Largest Element Using Pointer Arithmetic.
#include <stdio.h>

int main() {
    int i, a[50], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int *ptr = a;           
    int max = *ptr;         
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Largest element: %d\n", max);
    return 0;
}
