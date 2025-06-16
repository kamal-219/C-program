//Multiply Two Numbers Using Pointers.
#include<stdio.h>

int mul(int *a,int *b){
    int x=10;
    return ((x)*(*b)) ; 
}
int main(){
    int a,b,c;
    printf("enter a and b = ");
    scanf("%d%d",&a,&b);
    c= mul(&a,&b);
    printf("%d",c);
    return 0;
}
