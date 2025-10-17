/******************************************************************************

Unit Conversion (Celsius to Fahrenheit) 

*******************************************************************************/
#include <stdio.h>

int main() {
    printf("Name: Rye Austine Chlonnie Bual\n");
    printf("ID Number: 2025304316\n");
    printf("-----------------------------\n");
    printf("\n");

    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("\n");

    printf("Result: %.2f°C = %.2f°F\n", celsius, fahrenheit);
    return 0;
}