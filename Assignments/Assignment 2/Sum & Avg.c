//calculate the sum and average of three variables using arithmetic operations.
#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("Enter tha value of a--\n");
    scanf("%d",&a);
    printf("Enter tha value of b--\n");
    scanf("%d",&b);
    printf("Enter tha value of c--\n");
    scanf("%d",&c);
    sum=a+b+c;
    printf("Sum of 3 numbers is--%d\n",sum);
    avg=sum/3;
    printf("Average is--%d",avg);
    return 0;
}
