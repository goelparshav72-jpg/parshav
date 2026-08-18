#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int d; // d stands for discriminant
    int r1, r2;

    // 1. Take inputs from the user
    scanf("%d %d %d", &a, &b, &c);

    // 2. Calculate the discriminant (b^2 - 4ac)
    d = (b * b) - (4 * a * c);

    // 3. Check the conditions using simple if-else
    if (d > 0) {
        // Roots are real and different
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %d, %d\n", r1, r2);
    }
    else if (d == 0) {
        // Roots are real and same
        r1 = -b / (2 * a);
        printf("Roots are real and same: %d\n", r1);
    }
    else {
        // Roots are complex (d is negative)
        printf("Roots are complex\n");
    }

    return 0;
}
