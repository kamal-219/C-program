// Temperature Alert System
#include <stdio.h>
int main() {
    int temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%d",&temperature);
    if(temperature<=0){
        printf("Freezing Alert");
    }
    else if(temperature>0&&temperature<=10){
        printf("Very cold");
    }
    else if(temperature>10&&temperature<=25){
        printf("Moderate");
    }
    else if(temperature>25&&temperature<=45){
        printf("Hot");
    }
    else{
        printf("Heatwave Alert");
    }
    return 0;
}
