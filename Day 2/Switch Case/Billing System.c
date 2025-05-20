#include <stdio.h>

int main() {
    int choice;
    int total = 0;

    do {
        printf("\n--- Fast Food Menu ---\n");
        printf("1. Burger       - $50\n");
        printf("2. Pizza        - $100\n");
        printf("3. Fries        - $30\n");
        printf("4. Soft Drink   - $20\n");
        printf("5. Exit and Show Bill\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                total += 50;
                printf("Burger added to your order. Total = $%d\n", total);
                break;
            case 2:
                total += 100;
                printf("Pizza added to your order. Total = $%d\n", total);
                break;
            case 3:
                total += 30;
                printf("Fries added to your order. Total = $%d\n", total);
                break;
            case 4:
                total += 20;
                printf("Soft Drink added to your order. Total = $%d\n", total);
                break;
            case 5:
                printf("\nFinal Bill Amount: $%d\n", total);
                printf("Thank you for your order!\n");
                break;
            default:
                printf("Invalid choice. Please select from the menu.\n");
        }

    } while(choice != 5);

    return 0;
}
