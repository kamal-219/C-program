#include <stdio.h>

int main() {
    char signal;

    printf("Enter traffic signal (R/G/Y): ");
    scanf(" %c", &signal);  

    switch (signal) {
        case 'R':
        case 'r':
            printf("Signal is RED → STOP\n");
            break;

        case 'G':
        case 'g':
            printf("Signal is GREEN → GO\n");
            break;

        case 'Y':
        case 'y':
            printf("Signal is YELLOW → WAIT\n");
            break;

        default:
            printf("Invalid input. Please enter R, G, or Y.\n");
    }

    return 0;
}
