#include <iostream>   // For input and output
using namespace std;

int main() {
    int num;   // Declare an integer variable

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> num;

    // Use logical AND (&&) to check both conditions:
    // 1) number is greater than 0
    // 2) number is less than 100
    if (num > 0 && num < 100) {
        cout << "The number is greater than 0 and less than 100." << endl;
    } 
    // If any one of the conditions is false
    else {
        cout << "The number does NOT meet both conditions." << endl;
    }

    return 0;   // Program ends successfully
}
