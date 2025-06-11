//smallest number in array
#include<stdio.h>
int main(){
    int a[50], n, i,min;

    printf("Enter size of array=\n");
    scanf("%d", &n);

    printf("Enter  element %d =\n", n);
   
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
         min=a[0];
         if(min>a[i]){
         min=a[i];
      }
    }
    
   
    printf("smallest number  %d",min);
    return 0;
}
