#include <stdio.h>


void increment(int *p) {
    (*p)++;  
}

int main() {
    int i,n,x = 0;
    printf("limit = ");
    scanf("%d",&n);
    printf("After increment: %d\n", x); 
    for(i=0;i<n+1;i++){
        printf("%d\n", x); 
       increment(&x); 
    }
    

    return 0;
}
