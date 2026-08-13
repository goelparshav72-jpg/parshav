//Q6: Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Read two integers from the input
    if (scanf("%d %d", &num1, &num2) == 2) {
        
        // Swap logic using a third variable (temp)
        temp = num1;   // Store the value of num1 in temp
        num1 = num2;   // Assign the value of num2 to num1
        num2 = temp;   // Assign the value of temp (original num1) to num2

        // Print the output in the requested format
        printf("After swap: %d %d\n", num1, num2);
    }

    return 0;
}
