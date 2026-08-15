//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int number;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Outer if-else structure
    if (number >= 0) {
        // Inner (nested) if-else structure
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("%d is a positive number.\n", number);
        }
    } else {
        printf("%d is a negative number.\n", number);
    }

    return 0;
}
