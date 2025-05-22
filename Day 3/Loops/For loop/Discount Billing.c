// Discount Billing System
//Input prices of n products. If a product price is above ₹1000, apply 10%  discount. Calculate total bill.
#include <stdio.h>

int main() {
    int n, i;
    float price, discount=0.10, total = 0, discountedPrice;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter the price of product %d: ", i);
        scanf("%f", &price);

        if (price >= 1000) {
            discountedPrice = price - (price * discount);
            printf("Discount applied! New price: ₹%.2f\n", discountedPrice);
        } else {
            discountedPrice = price;
        }

        total += discountedPrice;
    }

    printf("\nTotal bill amount to be paid: ₹%.2f\n", total);

    return 0;
}
