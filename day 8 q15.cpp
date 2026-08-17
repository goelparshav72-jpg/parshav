// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.


#include <iostream>
using namespace std;

int main() {
    char ch;

    // Prompt user for input
    cout << "Enter a character: ";
    cin >> ch;

    // Check character type using ASCII ranges
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase alphabet" << endl;
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet" << endl;
    } 
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    } 
    else {
        cout << "Special character" << endl;
    }

    return 0;
}
