// Count the number of ones in number
#include <stdio.h>

int main() {
    int num,i,count=0;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=0;i<=32;i++){
        if(num&(1<<i)){
            count++;
        }
    }
    printf("number of ones : %d",count);

    return 0;
}
