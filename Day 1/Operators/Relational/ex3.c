//check the number odd or even
#include <stdio.h>

int main() {
    int num,number;
    printf("enter the num value");
    scanf("%d",&num);
    number=num%2;
    if(number=0)
    {
        printf("number is even");
    }
  
    else{
        printf("number is odd");
    }
    return 0;
   
}
