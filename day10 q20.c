#include <stdio.h>

int main() {
    int day_number;

    // Read the day number from the user
    if (scanf("%d", &day_number) != 1) {
        printf("Invalid Input\n");
        return 1;
    }

    // Map numbers 1-7 to corresponding days using switch-case
    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
