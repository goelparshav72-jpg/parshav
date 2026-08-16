// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main() {
    char ch;

    // 1. Take character input from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // 2. Check if the character is a vowel (both lowercase and uppercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    } 
    // 3. If it is not a vowel, it is a consonant
    else {
        printf("Consonant\n");
    }

    return 0;
}
