#include <stdio.h>

int main() {
    double cost_price, selling_price;

    // Read cost price and selling price
    if (scanf("%lf %lf", &cost_price, &selling_price) != 2) {
        printf("Invalid Input\n");
        return 1;
    }

    // Determine profit, loss, or break-even
    if (selling_price > cost_price) {
        double profit = selling_price - cost_price;
        double profit_percentage = (profit / cost_price) * 100;
        // %.0f strips trailing decimals to match the sample test case format
        printf("Profit %.0f%%\n", profit_percentage);
    } 
    else if (cost_price > selling_price) {
        double loss = cost_price - selling_price;
        double loss_percentage = (loss / cost_price) * 100;
        printf("Loss %.0f%%\n", loss_percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
