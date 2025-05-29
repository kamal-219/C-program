//calculate the area of a circle using a constant value for π.
#include<stdio.h>
#define PI 3.14
int main()
{
    float area,radius;
    printf("Enter the Radius--");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of the circle is--%f",area);
    return 0;
}
