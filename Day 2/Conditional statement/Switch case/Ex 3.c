// Mini Banking System
#include <stdio.h>
int main() {
    int choose;
    float balance=0.00,deposit,amount;
    printf("Banking System!!!\n");
    printf(" \n");
    printf("1. Check Balance\n");
    printf("2. Deposit amount\n");
    printf("3. Withdraw amount\n");
    printf("4. Exit\n");
    
    printf("Enter your choice from 1-4 : ");
    scanf("%d",&choose);
   
    switch(choose){
        case 1:
         printf("Your Account Balance is %2f ",balance);
        break;
        case 2:
         printf("Enter Deposit Amount : ");
         scanf("%f",&deposit);
         balance+=deposit;
         printf("You Succesfully depsosited $%2f ",deposit);
         printf("Your Current balance%2f",balance);
        break;
        case 3:
         printf("Withdraw amount : ");
         scanf("%d",&amount);
         balance-=amount;
         printf("You are debited $%d ",amount);
         printf("Your Current balance",balance);
         break;
        case 4:
         printf("Thank you");
         default:
         printf("Invalid choice");
        
    }
    return 0;
}
