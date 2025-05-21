// Total bill for Multiple Itmes 
#include <stdio.h>

int main() {
    int n, i;
    float price, total = 0;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }

    printf("Total bill amount = %.2f\n", total);
    return 0;
}
