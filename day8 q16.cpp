// Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Prompt user for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Compare numbers using nested if-else logic
    if (num1 >= num2 && num1 >= num3) {
        cout << "Largest is " << num1 << endl;
    } 
    else if (num2 >= num1 && num2 >= num3) {
        cout << "Largest is " << num2 << endl;
    } 
    else {
        cout << "Largest is " << num3 << endl;
    }

    return 0;
}
