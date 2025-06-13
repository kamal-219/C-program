//Area of circle
#include <stdio.h>
void val(float l,float w,float area,float perimeter);
void val(float l,float w,float area,float perimeter){
     area=l*w;
     perimeter=(2*(l*w));
         printf("area= %f \n",area);
   
    printf("perimeter= %f \n",perimeter);
     
 }
int main() {
    float l,w,area,perimeter;
    printf("enter the length value= \n");
    scanf("%f",&l);
    printf("enter the width value= \n");
    scanf("%f",&w);
   val(l,w,area,perimeter);

    return 0;
}
