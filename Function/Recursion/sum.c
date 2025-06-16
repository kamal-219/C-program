// sum of digits
#include <stdio.h>

int sum(int n) {
    if(n==0){
        return 0;
    }
   
   return n%10 + sum(n/10);

    return 0;
}
void main() {
    int n = 456;
    int x=sum(n);
        printf("%d ", x);
    
}
