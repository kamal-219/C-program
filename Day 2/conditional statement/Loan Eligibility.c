// Loan Eligibility system
#include <stdio.h>

int main() {
    int age;
    float income;
    int creditScore;

    // Input data
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income (₹): ");
    scanf("%f", &income);

    printf("Enter your credit score: ");
    scanf("%d", &creditScore);

    // Nested condition check
    if (age >= 21) {
        if (income >= 25000) {
            if (creditScore > 700) {
                printf("Loan Approved \n");
            } else {
                printf("Loan Denied : Credit score must be above 700.\n");
            }
        } else {
            printf("Loan Denied : Income must be at least ₹25,000.\n");
        }
    } else {
        printf("Loan Denied : Age must be 21 or older.\n");
    }

    return 0;
}
