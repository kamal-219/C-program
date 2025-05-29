//Demo program using keywords,constants & Identifiers
#include<stdio.h>
#define PI 3.14
int main(){
    const int radius=5;
    float area;
    area=PI*radius*radius;
    printf("Area of circle %2f \n",area);
    return 0;
}
