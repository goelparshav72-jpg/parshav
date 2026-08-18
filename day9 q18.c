#include <stdio.h>

int main() {
    int percentage;

    // Ask the user to type in the percentage
    printf("Enter percentage (0-100): ");
    
    // Read the number typed by the user and save it in the variable
    scanf("%d", &percentage);

    // Check the percentage using if-else statements
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } 
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    } 
    else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    } 
    else if (percentage >= 60 && percentage < 61) { // Adjusted to match 60-69 logic
        printf("Grade D\n");
    } 
    else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    }
    else {
        printf("Grade F\n");
    }

    return 0;
}
