// Write a function to print the binary representation of an integer using a pointer.

#include <stdio.h>
void bin(int *p);
int main() {
    int a;
    printf("A=");scanf("%d",&a);
    bin(&a);
    return 0;
}
void bin(int *p){
    for(int i=0;i<4;i++){
       int c=(((*p)>>i)|0) ;
       printf("%d",c);
    }
}
