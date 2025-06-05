//Use bit fields to pack multiple flags into a single variable.
#include<stdio.h>
struct electro{
    unsigned int phone:1;
    unsigned int lap  :2;
    unsigned int tab  :4;
};
int main(){
    struct electro A;
    
    A.phone=1;
    A.lap=2;
    A.tab=3;
    int choice;
    printf("enter your choice 1 or 2 or 3");
    scanf("%d",&choice);
    
    if(choice==1){
        printf("book choosed");
    }
    else if(choice==2){
        printf("Laptop choosed");
    }
    else{
        printf("Tab booked");
    }
    return 0;
}
