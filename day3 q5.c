//Q5: Write a program to convert temperature from Celsius to Fahrenheit.


#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Read the temperature in Celsius from the user
    if (scanf("%f", &celsius) == 1) {
        
        // Convert Celsius to Fahrenheit using the standard formula
        fahrenheit = (celsius * 9 / 5) + 32;

        // Print the output in the requested format
        // %.0f prints the float as a whole number matching your test cases
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }

    return 0;
