#include <stdio.h>

int main() {
    char choice;           // To store user's decision to continue or not
    float Vin, R1, R2;     // Input voltage and resistances
    float Vout;            // Output voltage
    float Iin, Iout;       // Input and output current
    int run = 1;           // Control variable for the loop
    int calculation_type;  // To store user's choice between Voltage or Current Divider

    printf("Voltage/Current Divider Calculator\n");

    while (run) {
        // Menu for the type of calculation
        printf("\nChoose the type of calculation:\n");
        printf("1. Voltage Divider\n");
        printf("2. Current Divider\n");
        printf("Enter your choice (1/2): ");
        scanf("%d", &calculation_type);

        if (calculation_type == 1) {
            // Voltage Divider
            printf("\n--- Voltage Divider ---\n");
            printf("Enter the supply voltage (Vin in volts): ");
            scanf("%f", &Vin);
            printf("Enter the resistance R1 (in ohms): ");
            scanf("%f", &R1);
            printf("Enter the resistance R2 (in ohms): ");
            scanf("%f", &R2);

            // Validation for resistances
            if (R1 <= 0 || R2 <= 0) {
                printf("Error: Resistance values must be greater than 0.\n");
                continue; // Go back to the start of the loop for new inputs
            }

            // Voltage Divider Calculation
            Vout = Vin * (R2 / (R1 + R2));
            printf("The output voltage (Vout) is: %.2f volts\n", Vout);
        } else if (calculation_type == 2) {
            // Current Divider
            printf("\n--- Current Divider ---\n");
            printf("Enter the input current (Iin in amperes): ");
            scanf("%f", &Iin);
            printf("Enter the resistance R1 (in ohms): ");
            scanf("%f", &R1);
            printf("Enter the resistance R2 (in ohms): ");
            scanf("%f", &R2);

            // Validation for resistances
            if (R1 <= 0 || R2 <= 0) {
                printf("Error: Resistance values must be greater than 0.\n");
                continue; // Go back to the start of the loop for new inputs
            }

            // Current Divider Calculation
            Iout = Iin * (R1 / (R1 + R2));
            printf("The output current (Iout) is: %.2f amperes\n", Iout);
        } else {
            // Invalid choice for calculation type
            printf("Invalid choice. Please select 1 for Voltage Divider or 2 for Current Divider.\n");
            continue; // Restart the loop
        }

        // Ask the user to perform another calculation
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice); // Space before %c to consume newline characters

        if (choice == 'n' || choice == 'N') {
            run = 0;
        }
    }

    printf("Exiting the program.\n");
    return 0;
}
