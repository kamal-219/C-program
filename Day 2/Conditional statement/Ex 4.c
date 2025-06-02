// Vehical Speed Monitoring System
#include <stdio.h>
int main() {
    float speed;
    printf("Enter speed of the vehical: ");
    scanf("%f",&speed);
    if(speed<=60){
        printf("safe");
    }
    else if(speed>60&&speed<=80){
        printf("Caution: Slow Down");
    }
    else{
        printf("Over speeding : fine imposed");
    }
    return 0;
}
