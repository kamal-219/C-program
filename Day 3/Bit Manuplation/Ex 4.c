// Implement an efficient algorithm to find the only non-repeating number in an array.
#include <stdio.h>

int main() {
    int i,j,a[] = {3, 6, 7, 6, 9, 2, 3},output=0;
    int len=sizeof(a)/sizeof(a[0]);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            output^=a[i];
            if(output!=0){
              printf("%d",a[i]);
        }
       
       }
    } 
    return 0;
}
