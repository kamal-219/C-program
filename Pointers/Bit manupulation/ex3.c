//Reverse Bits of a 32-bit Integer Using Pointers
#include<stdio.h>
void rev(int *p);
int main(){
    int a,c;
    printf("a= ");scanf("%d",&a);
    rev(&a);
    return 0; 
}
void rev(int *p){
    int res=0,i;
    for(i=0;i<32;i++){
        int c=((*p)>>i)&1;
        res|=c<<(31-i); 
    }
    printf("reversed= %d",res);
}
