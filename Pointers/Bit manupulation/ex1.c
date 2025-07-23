// Use pointer and bitwise operations to count the number of set bits.
#include <stdio.h>

int main() {
    int a,i,c=0;
    printf("a= ");scanf("%d",&a);
    int *p=&a;
    for(i=0;i<8;i++){
    int k=(((*p)>>i)&1);
    if(k==1){
        c++;
    }
    
    }
    printf("%d",c);

    return 0;
}
