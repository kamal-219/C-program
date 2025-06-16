#include<stdio.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int main(){
int a,b,t;
printf("enter value a=  & b=");
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("after value a =%d and b=%d ",a,b);
return 0;
}
