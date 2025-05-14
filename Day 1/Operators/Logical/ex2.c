//Eligible criteria
#include <stdio.h>

int main() {
    int age,sub1,sub2,sub3,avg;
    printf("enter the your age");
    scanf("%d",&age);
    printf("enter the sub1 marks");
    scanf("%d",&sub1);
    printf("enter the sub2 marks");
    scanf("%d",&sub2);
    printf("enter the sub3 marks");
    scanf("%d",&sub3);
    avg=((sub1+sub2+sub3)%3);
    
    if((age>=18)&&(avg>=50))
    {
        printf("you are eligible");
    }
  
    else{
        printf("you are not eligible");
    }
    return 0;
   
}
