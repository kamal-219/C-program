//rotation of array by left
#include <stdio.h>

int main() {
    int i,n,k;
    printf("Enter number of elements and k : ");
    scanf("%d%d", &n,&k);

    int a[50]; 

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    int x[50];
    for(i=0;i<n;i++){
      
      int val=i+k;
      if(val>=n){
        val=val-n;
      }
      x[i]=a[val]; 
    
    }
    for(i=0;i<n;i++){
       
        printf(" %d",x[i]); 
    }
       return 0;
}
