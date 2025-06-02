// Railway Ticket Booking System
#include <stdio.h>
int main() {
    int choose,amount=100,n;
    printf("Railway Ticket Booking Menu!!!\n");
    printf(" \n");
    printf("1. Genral\n");
    printf("2. Sleeper\n");
    printf("3. AC\n");
    printf("4. Exit\n");
    
    printf("Enter your choice from 1-4 : ");
    scanf("%d",&choose);
    printf("Enter number of passengers :");
    scanf("%d",&n);
    switch(choose){
        case 1:
         printf("You Booked General compartment and your ticket price is %d ",amount*n);
        break;
        case 2:
         amount=n*(150+amount);
         printf("You Booked Sleeper compartment and your ticket price is %d ",amount);
        break;
        case 3:
         amount= n*(300+amount);
         printf("You Booked AC compartment and your ticket price is %d",amount);
         break;
        case 4:
         printf("Thank you");
         default:
         printf("Invalid choice");
        
    }
    return 0;
}
