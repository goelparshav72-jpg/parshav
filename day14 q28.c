#include <stdio.h>

int main() {
    int n;
    int product = 1; 

    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
       
        if (i % 2 == 0) {
            product = product * i;
        }
    }

   
    printf("%d\n", product);

    return 0;
}
