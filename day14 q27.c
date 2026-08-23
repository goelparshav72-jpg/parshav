#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int count = 0;
    int num = 1; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    while (count < n) {
        sum = sum + num; 
        num = num + 2;   
        count++;         
    }

    // Print the final result
    printf("Sum: %d\n", sum);

    return 0;
}
