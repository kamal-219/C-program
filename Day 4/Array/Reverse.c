//reverse array
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];  

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("You entered the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("reverse Array");
        printf("%d ", a[i]); 
    }

    return 0;
}
