//Convert the celsius into fahrenheit
#include <stdio.h>

int main() {
    float celsius,fahrenheit;
    printf("enter the celsius value");
    scanf("%f",&celsius);
    fahrenheit=(celsius*(9/5)+32);
    printf("the fahrenheit is-- %f",fahrenheit);
    return 0;   
}
