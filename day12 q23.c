#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // Ask the user for the number of late days
    printf("Enter the number of days late: ");
    scanf("%d", &days);

    // Calculate fine based on the days late
    if (days <= 0) {
        printf("No fine.\n");
    }
    else if (days <= 5) {
        // First 5 days: ₹2 per day
        fine = days * 2;
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 10) {
        // First 5 days (₹10) + remaining days at ₹4 per day
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine ₹%d\n", fine);
    }
    else if (days <= 30) {
        // First 5 days (₹10) + next 5 days (₹20) + remaining days at ₹6 per day
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine ₹%d\n", fine);
    }
    else {
        // More than 30 days
        printf("Membership Cancelled\n");
    }

    return 0;
}
