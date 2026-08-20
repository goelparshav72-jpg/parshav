#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Read the lengths of the three sides
    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("Invalid Input\n");
        return 1;
    }

    // Classify the triangle based on the conditions
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles\n");
    } 
    else {
        printf("Scalene\n");
    }

    return 0;
}
