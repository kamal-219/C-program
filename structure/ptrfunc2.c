#include <stdio.h>

struct account {
    int acc_no;
    float balance; 
};

void money(struct account *ac, float amount) {
    ac->balance += amount;
}

int main() {
    struct account ac;
    ac.balance=0.00;
   
    printf("acc = ");
    scanf("%d", &ac.acc_no);

    float deposit;
    printf("deposit amount = ");
    scanf("%f", &deposit);

   
    money(&ac, deposit);

   
    printf("Account = %d\n", ac.acc_no);
    printf("Updated balance = %.2f\n", ac.balance);

    return 0;
}
