//Function call with Arguments and return type
#include <stdio.h>
int add(int a,int b){
   
     a=a+b;
     return a;
}
int main(){
     int a,b;
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("sum= %d",sum);
    return 0;
}
