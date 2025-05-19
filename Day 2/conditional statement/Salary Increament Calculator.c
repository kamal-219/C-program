// Salary increament calculator
#include <stdio.h>

int main() {
    int Salary, Experience;
    float NewSalary;

    printf("Enter the Standard Salary: ");
    scanf("%d", &Salary);

    printf("Enter the Experience in years: ");
    scanf("%d", &Experience);

    if (Experience < 2) {
        printf("No Increment. Your salary remains ₹%d\n", Salary);
    } 
    else if (Experience >= 2 && Experience <= 5) {
        NewSalary = Salary + (Salary * 0.10);  // 10% increment
        printf("You get 10%% increment. Your new salary is ₹%.2f\n", NewSalary);
    } 
    else if (Experience > 5 && Experience <= 10) {
        NewSalary = Salary + (Salary * 0.20);  // 20% increment
        printf("You get 20%% increment. Your new salary is ₹%.2f\n", NewSalary);
    }
    else {
        NewSalary = Salary + (Salary * 0.30);  // 30% increment
        printf("You get 30%% increment. Your new salary is ₹%.2f\n", NewSalary);
    }

    return 0;
}
