// reverse number
#include <stdio.h>

int rev(int n,int r) {
    if(n==0) return 0;
    return rev(n/10,r*10+n%10);
}
void main(){
    int n,r=0;
    printf("Enter number to reverse= ");
    scanf("%d",&n);
    int x=rev(n,r);
    printf("%d",x);
}
