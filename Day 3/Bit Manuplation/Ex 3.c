// a function to reverse the bits of a 32-bit integer.
#include <stdio.h>

int main() {
    unsigned int op=0,ip,ryt,i;
    printf("Enter the number : ");
    scanf("%u",&ip);
    for(i=0;i<32;i++){
        ryt=1&(ip >> i);
        op=op|(ryt<<(31-i)); 
        
    }
    printf("Reversed value :%u ",op);
    return 0;
}
