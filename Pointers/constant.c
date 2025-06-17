//constant
#include<stdio.h>
int main(){
    int a=10,b=20;
    int*const ptr1=&a;
    
    printf("\npointer value= %d",*ptr1);
    *ptr1=15;
    printf("\nafter change pointer value= %d",*ptr1);
    
    const int*ptr2=&a;
    printf("\n%d",*ptr2);
   ptr2=&b;
   printf("\n%d",*ptr2);
    
    const int*const ptr3=&a;
    printf("\n%d",*ptr3);
    return 0;
    
    
    
}
