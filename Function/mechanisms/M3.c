//Function call with No Arguments and return type

#include <stdio.h>
int add();

int add(){
    int a,b;
    
    scanf("%d%d",&a,&b);
    a=a+b;
    
    return a;
}
int main(){
    
    int sum=add();
    printf("sum= %d",sum);
    
    return 0;
}
