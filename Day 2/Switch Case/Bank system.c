// Bank System
#include <stdio.h>

int main() {
    int choice;
    float balance=0.0,amount;
    do{
        printf("--Bank System--\n ");
        printf("1.View Balance-\n ");
        printf("2.Amount withdraw-\n ");
        printf("3.Deposit amount-\n ");
        printf("4.Exit\n ");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:
             printf("Current Balance:$%.2f",balance);
             break;
        case 2:
             printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("₹%.2f withdrawn successfully.\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;
        case 3:
             printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
        case 4:
             printf("Thank you for using our banking system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    }while(choice!=4)

    return 0;
}
