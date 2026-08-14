// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    // Input financial data from the user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    // 1. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100;

    // 2. Calculate Compound Interest
    // Formula: Amount = P * (1 + R/100)^T
    // Formula: CI = Amount - P
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Display the calculated results
    printf("\n--- Interest Calculation Results ---\n");
    printf("Principal Amount  : %.2f\n", principal);
    printf("Simple Interest   : %.2f\n", simple_interest);
    printf("Compound Interest : %.2f\n", compound_interest);
    printf("Total Amount (CI) : %.2f\n", amount);

    return 0;
}
