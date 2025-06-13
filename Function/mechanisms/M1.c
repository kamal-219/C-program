//No Arguments & No return type

#include <stdio.h>
void add();

void add(){
   int a,b;
   
    scanf("%d%d",&a,&b);
     a=a+b;
    printf("sum= %d",a);
    
}
int main(){
    add();
    return 0;
}
