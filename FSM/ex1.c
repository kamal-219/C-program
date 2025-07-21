//Traffic light
#include<stdio.h>
enum state{RED,GREEN,YELLOW};
void delay(){
    for(int i=0;i<2000000;i++);
}
int main(){
    enum state now=RED;
    while(1){
        switch(now){
            case RED:
            printf("red\n");
            delay();
            now=GREEN;
            break;
            case GREEN:
            printf("Green\n");
            delay();
            now=YELLOW;
            break;
            case YELLOW:
            printf("yellow\n");
            delay();
            now=RED;
            break;
        }
    }
}
