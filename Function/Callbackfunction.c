#include <stdio.h>
int mul(int a,int b);
int mul(int a,int b){
    return a*b;
}
void value(int a,int b,int(*final)(int,int)){
    printf("%d",final(a,b));
}
int main(){
    int x1,x2;
    printf("enter value a and b");
    scanf("%d%d",&x1,&x2);
    value(x1,x2,mul);
    return 0;
}
