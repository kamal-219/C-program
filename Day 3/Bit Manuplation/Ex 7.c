//implement parity checker 
#include <stdio.h>
int main() {
    int num,parity=0;
    printf("Enter number=");
    scanf("%d",&num);
    while(num){
        parity^=num&1;
        num>>=1;
    }
    if(parity==0){
        printf("Even parity",num);
    }
    else{
        printf("Odd parity",num);
    }
    return 0;
}
