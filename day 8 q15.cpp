// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    }
    // Check if the character is a lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If it doesn't match any of the above, it's a special character
    else {
        printf("Special character\n");
    }

    return 0;
}


 
