#include <stdio.h>

int main() {
    int units;
    int bill = 0;

    // Ask the user to input the units consumed
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on the slabs
    if (units <= 0) {
        bill = 0;
    }
    else if (units <= 100) {
        // First 100 units at ₹5/unit
        bill = units * 5;
    }
    else if (units <= 200) {
        // First 100 units (₹500) + next remaining units at ₹7/unit
        bill = (100 * 5) + ((units - 100) * 7);
    }
    else if (units <= 300) {
        // First 100 (₹500) + next 100 (₹700) + remaining units at ₹10/unit
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
    else {
        // First 100 (₹500) + next 100 (₹700) + next 100 (₹1000) + remaining units at ₹12/unit
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Print the final output matching your test case format
    printf("Bill: ₹%d\n", bill);

    return 0;
}
