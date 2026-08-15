//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int number;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is divisible by 2
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
