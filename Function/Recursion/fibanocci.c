// recursive function -Fibanocci series
#include <stdio.h>

int fib(int n) {
    if(n==0){
        return 0;
    }
   if(n==1){
       return 1;
   }
   return fib(n-1)+fib(n-2);

    return 0;
}
void main() {
    int n = 10;

    printf("Fibonacci series %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
}
