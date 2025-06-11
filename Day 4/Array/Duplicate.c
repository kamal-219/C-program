//remove duplicates
#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[50]; 

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

  
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(a[i] == a[j]) {
                
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
              
            } else {
                j++;
            }
        }
    }

    printf("\n after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
