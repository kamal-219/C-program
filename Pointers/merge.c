//Merge 2 arrays
#include <stdio.h>

int main() {
    int a[50], b[50], c[100], n;
    int *pa, *pb, *pc;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements for array A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements for array B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

  
    pa = a;
    pb = b;
    pc = c;


    for (int i = 0; i < n; i++) {
        *(pc++) = *(pa++);
    }

   
    for (int i = 0; i < n; i++) {
        *(pc++) = *(pb++);
    }

   
    printf("Merged array:\n");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}


