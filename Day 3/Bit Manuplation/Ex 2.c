// Swap two numbers without using a temporary variable.
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value a=");
    scanf("%d",&a);
    printf("Enter the value b=");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}
