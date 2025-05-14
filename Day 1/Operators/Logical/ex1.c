// check if a number is between 10 and 100 
#include <stdio.h>

int main() {
    int num;
    printf("enter the num value");
    scanf("%d",&num);
    if((num>=10)&&(num<=100))
    {
        printf("number prsent between 10 t0 100");
    }
  
    else{
        printf("out of range");
    }
    return 0;
   
}
