//Count trailing zeros in a binary number efficiently.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter number=");
    scanf("%d",&n);
    if(n==0){
        printf("Total trailing 0's= 32");
    }
    while((n&1)==0){
        count++;
        n>>=1;
    }
    printf("Total trail 0's=%d",count);
    return 0;
}
