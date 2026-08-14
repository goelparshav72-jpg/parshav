//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Input the total seconds from the user
    printf("Enter time in total seconds: ");
    scanf("%d", &total_seconds);

    // 1. Calculate hours
    // 1 hour = 3600 seconds (60 minutes * 60 seconds)
    hours = total_seconds / 3600;

    // 2. Calculate remaining minutes
    // Extract remaining seconds using modulo, then divide by 60
    minutes = (total_seconds % 3600) / 60;

    // 3. Calculate remaining seconds
    // Use modulo 60 to find the leftover seconds
    seconds = total_seconds % 60;

    // Display the result in HH:MM:SS format
    // %02d pads single-digit numbers with a leading zero
    printf("\nConverted Time -> %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
