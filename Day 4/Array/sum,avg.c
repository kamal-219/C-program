//sum and avg of array
#include <stdio.h>
int main() {
    int i,n,sum=0,avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
        sum+=a[i];
        
    }
    printf("Added=%d\n",sum);
    avg=sum/n;
    printf("Average=%d",avg);
       return 0;
}
