//Compound Intrest
#include <stdio.h>
#include <math.h>
int main() {
    float r,CI,P,n;
    double A;
    printf("Enter the Priniciple amount--\n");
    scanf("%f",&P);
    printf("Enter the Rate of intrest in precentage--\n");
    scanf("%f",&r);
    printf("Enter the number of years--\n");
    scanf("%f",&n);
    A=P*(pow((1+r*0.01),n));
    printf("Annual intrest is--%2lf\n",A);
    CI=A-P;
    printf("Compound intrest is--%2f",CI);
    return 0;
}
