// area and perimeter of the rectangle 
#include <stdio.h>

int main() {
    float l,w,area,perimeter;//l-length,w-width
    printf("enter the length value");
    scanf("%f",&l);
    printf("enter the width value");
    scanf("%f",&w);
    area=l*w;
    printf("area= %f",area);
    perimeter=(2*(l*w));
    printf("perimeter= %f",perimeter);
    return 0;
}
