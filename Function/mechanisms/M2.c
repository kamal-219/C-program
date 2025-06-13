//function call with arguments and no return type

#include <stdio.h>
void add(int a,int b);

void add(int a,int b){
   
     a=a+b;
    printf("sum= %d",a);
    
}
int main(){
    int a,b;
    
    scanf("%d%d",&a,&b);
    add(a,b);
    
    
    return 0;
}
