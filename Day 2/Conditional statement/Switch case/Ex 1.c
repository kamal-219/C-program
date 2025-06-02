// Mobile Recharge Plan
#include <stdio.h>
int main() {
    int choose;
    printf("Mobile Recharge Plan!!!\n");
    printf(" \n");
    printf("1. $199 Plan - 1.5GB/day for 28 days\n");
    printf("2. $399 Plan - 2GB/day for 56 days\n");
    printf("3. $599 Plan - 3GB/day for 84 days\n");
    printf("4. Exit\n");
    
    printf("Enter your choice from 1-4 : ");
    scanf("%d",&choose);
    
    switch(choose){
        case 1:
         printf("You have successfully recharged $199 Plan - 1.5GB/day for 28 days");
        break;
        case 2:
         printf("You have successfully recharged $399 Plan - 2GB/day for 56 days");
        break;
        case 3:
         printf("You have successfully recharged $599 Plan - 3GB/day for 84 days");
         break;
        case 4:
         printf("Thank you");
         default:
         printf("Invalid choice");
        
    }
    return 0;
}
