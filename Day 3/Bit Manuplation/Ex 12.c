//Detect overflow in signed integer addition
#include <stdio.h>
int main() {
    int a,add;
    printf("Enter number=");
    scanf("%d",&a);
    add=a+1;
    printf("%d",add );
    if((a>0)&(add<0)){
        printf("overflow detected");
    }
    else{
        printf(" Overflow not detected",add);
    }
    return 0;
}
