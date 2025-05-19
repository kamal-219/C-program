// Check if a given number is within the range 50 to 100 inclusive, and also if it's divisible by both 3 and 5.
#include <stdio.h>

int main() {
    int num;
    printf("enter the num value");
    scanf("%d",&num);
    if((num>=50)&&(num<=100))
    {
        printf("number present between 50 t0 100");
        if((num%3==0)&&(num%5==0)){
            printf("the given number is divisible by both 3 and 5");
        }
        else{
            printf("the number is in Range but not divisible by 3 and 5");
        }
    }
  
    else{
        printf("out of range");
    }
    return 0;
   
}
