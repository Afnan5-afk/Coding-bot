// Program for Pythagoras Theorem
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float base, perpendicular, hypotenuse;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Perpendicular: ";
    cin >> perpendicular;

    hypotenuse = sqrt((base*base) + (perpendicular*perpendicular));

    cout << "Hypotenuse: " << hypotenuse << endl;

    return 0;
}
