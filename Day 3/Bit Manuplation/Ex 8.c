//Multiplication
#include <stdio.h>
int main() {
    int a , b;
    printf("Enter a= ");
    scanf("%d",&a);
    printf("Enter b= ");
    scanf("%d",&b);
    int result = 0;
    int x = a; 
    int y = b; 
    while (y > 0) {
        if (y & 1) {
            result += x;
        }
        x <<= 1;
        y >>= 1;
    }

    printf("%d",result);
    return 0;
}
