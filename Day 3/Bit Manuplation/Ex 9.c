//Simulate an 8-bit register and implement SET, CLEAR, TOGGLE, and READ bit operations.
#include<stdio.h>
int main(){
    unsigned char ip=0;
    int choice,bit;
    printf("1.SET\n");
    printf("2.CLEAR\n");
    printf("3.TOGGLE\n");
    printf("4.READ Bit\n");
    printf("Enter operation= ");
    scanf("%d",&choice);
    if(choice>=1&&choice<4){
        printf("Enter the bit position=");
        scanf("%d",&bit);
    }
    switch(choice){
        case 1:
              ip=ip|(1<<bit);
              printf("after set=%d",ip);
              break;
        case 2:
              ip=ip&~(1<<bit);
              printf("after clear=%d",ip);
              break;
        case 3:
              ip=ip^(1<<bit);
              printf("After Toggle=%d");
              break;
        case 4:
              printf("readed=%d",(ip>>bit)&1);
              break;
        default:printf("Invalid choice");
        break;
    }
    return 0;
}
