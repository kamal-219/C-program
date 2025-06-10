//Use bit fields to pack multiple flags into a single variable.
#include<stdio.h>
struct electro{
    unsigned int lap  :2;
};
int main(){
    struct electro A;
        A.lap=1;

    if(A.lap==0){
        printf("laptop chosed");
    }
    else if(A.lap==1){
        printf("Laptop booked");
    }
    else if(A.lap==2){
          printf("Laptop Dispatched");
    }
    else if(A.lap==3){
         printf("Laptop delivered");
    }
   else{
       printf("Invalid ");
   }
   
   return 0;
}
   
