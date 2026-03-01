#include <iostream>   // For input and output
using namespace std;

int main() {
    int num1, num2;   // Declare two integer variables

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Check if both numbers are equal
    if (num1 == num2) {
        cout << "Both numbers are equal." << endl;
    }
    // Check if the first number is greater than the second
    else if (num1 > num2) {
        cout << "The first number is greater than the second number." << endl;
    }
    // Otherwise, the first number is less than the second
    else {
        cout << "The first number is less than the second number." << endl;
    }

    return 0;   // Program ends successfully
}
