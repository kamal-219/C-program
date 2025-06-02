// Loan Eligibility
#include <stdio.h>

int main() {
    int age,income,creditscore;
    printf("Enter the age: ");
    scanf("%d",&age);
    printf("Enter the Monthly income: ");
    scanf("%d",&income);
    printf("Enter the creditscore: ");
    scanf("%d",creditscore);
    if(age>=18){
        if(income>=10000){
            if(creditscore>=750){
                printf("You are Eligible for our Loan");
            }
            else{
                printf("Your Creditscore must be above 750 :Loan Denied");
            }
        }
        else{
            printf("Your Income must be above 10000 :Loan Denied");
        }
    }
    else{
        printf("Your Age should above 18 :Loan Denied");
    }
    return 0;
}
