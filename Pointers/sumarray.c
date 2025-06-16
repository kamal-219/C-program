//calculate sum of array using pointer
#include <stdio.h>
 
int sumArray(int *arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(arr + i);  
    }

    return sum;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];  

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    int result = sumArray(a, n); 

    printf("Sum of array elements = %d\n", result);

    return 0;
}
