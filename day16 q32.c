#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Loop to reverse the number
    while (num > 0) {
        remainder = num % 10;                  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;                        // Remove the last digit
    }

    // Check if the original number and reversed number are equal
    if (originalNum == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
