#include<stdio.h>
int main(){
    int a[50], n, i, j, t, min;

    printf("Enter size of array=\n");
    scanf("%d", &n);

    printf("Enter %d elements=\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }

    printf("After array sorted=\n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
