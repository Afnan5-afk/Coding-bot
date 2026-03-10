#include <iostream>   // For input and output
using namespace std;

int main() {
    int num;   // Declare an integer variable

    // Ask the user to enter an integer
    cout << "Enter an integer: ";
    cin >> num;

    // Use if statement to check if the number is positive
    if (num > 0) {
        cout << "The number is positive." << endl;
    }
    // If the number is zero or negative
    else {
        cout << "The number is NOT positive." << endl;
    }

    return 0;   // Program ends successfully
}
