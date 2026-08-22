#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Reading inputs in the format: number1 number2 operator
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
            
        case '-':
            printf("%d\n", num1 - num2);
            break;
            
        case '*':
            printf("%d\n", num1 * num2);
            break;
            
        case '/':
            // Simple check to avoid division by zero
            if(num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
            
        case '%':
            // Simple check to avoid modulo by zero
            if(num2 != 0) {
                printf("%d\n", num1 % num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
            
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}
