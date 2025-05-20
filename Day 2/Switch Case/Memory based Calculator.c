// Calculator with Memory Feature
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result = 0.0, memory = 0.0;
    int hasResult = 0, hasMemory = 0;

    do {
        printf("\n--- Calculator with Memory ---\n");
        printf("1. Perform Operation (+, -, *, /)\n");
        printf("2. Save Result to Memory\n");
        printf("3. Retrieve Memory\n");
        printf("4. Clear Memory\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter operator (+, -, *, /): ");
                char op;
                scanf(" %c", &op);
                printf("Enter second number: ");
                scanf("%f", &num2);

                switch(op) {
                    case '+':
                        result = num1 + num2;
                        break;
                    case '-':
                        result = num1 - num2;
                        break;
                    case '*':
                        result = num1 * num2;
                        break;
                    case '/':
                        if (num2 != 0)
                            result = num1 / num2;
                        else {
                            printf("Error: Division by zero.\n");
                            continue;
                        }
                        break;
                    default:
                        printf("Invalid operator.\n");
                        continue;
                }

                hasResult = 1;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                if (hasResult) {
                    memory = result;
                    hasMemory = 1;
                    printf("Result %.2f saved to memory.\n", memory);
                } else {
                    printf("No result to save. Perform an operation first.\n");
                }
                break;

            case 3:
                if (hasMemory)
                    printf("Memory: %.2f\n", memory);
                else
                    printf("Memory is empty.\n");
                break;

            case 4:
                memory = 0.0;
                hasMemory = 0;
                printf("Memory cleared.\n");
                break;

            case 5:
                printf("Exiting calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while(choice != 5);

    return 0;
}

