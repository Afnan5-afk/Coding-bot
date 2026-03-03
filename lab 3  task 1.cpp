// C++ Program to Calculate Resistance using Ohm's Law
//name:Afnan
//dept:Electrical eng
//sec:B
//reg no: 0659
// Formula: R = V / I

#include <iostream>
using namespace std;

int main() {

    // a. Define variables
    double current, voltage, resistance;

    // c. Ask user to enter values
    cout << "Enter the value of current (in Amperes): ";
    cin >> current;

    cout << "Enter the value of voltage (in Volts): ";
    cin >> voltage;

    // d. Check if current is zero (to avoid division by zero)
    if (current == 0) {
        cout << "Error! Current cannot be zero because division by zero is not allowed." << endl;
    }
    else {
        // Calculate resistance using Ohm's Law
        resistance = voltage / current;

        // e. Display all parameters
        cout << "\n----- Results -----" << endl;
        cout << "Voltage (V) = " << voltage << " Volts" << endl;
        cout << "Current (I) = " << current << " Amperes" << endl;
        cout << "Resistance (R) = " << resistance << " Ohms" << endl;
    }

    return 0;
}
