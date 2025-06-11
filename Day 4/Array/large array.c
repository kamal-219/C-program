//largest number in array
#include<stdio.h>
int main(){
    int a[50], n, i, j, t, max=a[0];

    printf("Enter size of array=\n");
    scanf("%d", &n);

    printf("Enter  element %d =\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
         if(max<a[i]){
         max=a[i];
      }
    }
    
   
    printf("largest number  %d",max);
    return 0;
}
