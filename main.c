#include <stdio.h>
#include "divider_calculator.h"

int main() {
    char choice;

    printf("====== Voltage/Current Divider Calculator ======\n");

    do {
        printf("\nChoose what to Calculate:\n");
        printf("1. Voltage Divider\n");
        printf("2. Current Divider\n");
        printf("Enter your choice (1/2): ");
        scanf(" %c", &choice);

        float Vin, Iin, R1, R2;
        switch (choice) {
            case '1':
                printf("\n=== Voltage Divider Calculation ===\n");
                printf("Enter Input Voltage (V): ");
                scanf("%f", &Vin);
                printf("Enter Resistance R1 (\u03A9): ");
                scanf("%f", &R1);
                printf("Enter Resistance R2 (\u03A9): ");
                scanf("%f", &R2);
                voltageDivider(Vin, R1, R2);
                break;
            case '2':
                printf("\n=== Current Divider Calculation ===\n");
                printf("Enter Input Current (A): ");
                scanf("%f", &Iin);
                printf("Enter Resistance R1 (\u03A9): ");
                scanf("%f", &R1);
                printf("Enter Resistance R2 (\u03A9): ");
                scanf("%f", &R2);
                currentDivider(Iin, R1, R2);
                break;
            default:
                printf("Invalid Input. Please enter 1 or 2.\n");
                continue;
        }

        do {
            printf("\nDo you want to perform another calculation? (y/n): ");
            scanf(" %c", &choice);

            if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("\nExiting the Program. Thank you!\n");
    return 0;
}
