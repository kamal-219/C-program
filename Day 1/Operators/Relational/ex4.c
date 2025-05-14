//check the number is divisible by 3 and 5
#include <stdio.h>

int main() {
    int num;
    printf("enter the num value");
    scanf("%d",&num);
    if((num%3==0)&&(num%5==0))
    {
        printf("divisible by both");
    }
  
    else{
        printf("not divisible");
    }
    return 0;
   
}
