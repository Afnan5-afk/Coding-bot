// Program to calculate branch currents in parallel circuit
#include <iostream>
using namespace std;

int main() {
    float r1=0, r2=0, totalCurrent=0, i1=0, i2=0;

    cout << "Enter Resistance 1: ";
    cin >> r1;

    cout << "Enter Resistance 2: ";
    cin >> r2;

    cout << "Enter Total Current: ";
    cin >> totalCurrent;

    // Current Divider Formula
    i1 = (r2 / (r1 + r2)) * totalCurrent;
    i2 = (r1 / (r1 + r2)) * totalCurrent;

    cout << "Current in R1: " << i1 << " A" << endl;
    cout << "Current in R2: " << i2 << " A" << endl;

    return 0;
}
