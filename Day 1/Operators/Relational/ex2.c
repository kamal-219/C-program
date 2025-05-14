//check the number positive or negative or zero
#include <stdio.h>

int main() {
    int num;
    printf("enter the num value");
    scanf("%d",&num);
    if(num>0){
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negative");  
    }
    else{
        printf("number is zero");
    }
    return 0;
   
}
