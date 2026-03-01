#include <iostream>   // For input/output
using namespace std;

int main() {
    int num;   // Declare an integer variable

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;  // Program ends successfully
}
