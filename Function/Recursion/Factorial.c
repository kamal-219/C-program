// recursive function
#include <stdio.h>

int fact(int n) {
   if(n<=1){
       return 1;
   }
   return n*fact(n-1);

    return 0;
}
void main(){
    int n=5;
    int x=fact(n);
    printf("%d",x);
}
