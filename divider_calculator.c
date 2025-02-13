#include "divider_calculator.h"

// Function to calculate Voltage Divider
void voltageDivider(float Vin, float R1, float R2) {
    if (R1 <= 0 || R2 <= 0) {
        printf("Error: Resistors must be positive values.\n");
        return ;
    }
    float Vout = Vin * R2 / (R1 + R2);
    printf("The Output Voltage is: %.2f V\n", Vout);
}

// Function to calculate Current Divider
void currentDivider(float Iin, float R1, float R2) {
    if (R1 <= 0 || R2 <= 0) {
        printf("Error: Resistors must be positive values.\n");
        return ;
    }
    float Iout = Iin * R1 / (R1 + R2);
    printf("The Output Current is: %.2f A\n", Iout);
}
