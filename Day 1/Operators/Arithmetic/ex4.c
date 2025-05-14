//find the simple intrest
#include <stdio.h>

int main() {
    float P,R,T,SI;
    printf("enter the Principle value");
    scanf("%f",&P);
    printf("enter the rate of intrest value");
    scanf("%f",&R);
    printf("enter the times in years");
    scanf("%f",&T);
    SI=((P*R*T)/100);
    printf("the SIMPLE INTREST %f",SI);
    return 0;
   
}
