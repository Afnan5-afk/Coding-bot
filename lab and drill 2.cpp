// Program to calculate circumference of a circle
// Formula: C = 2pr

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize variables
    double radius = 0;
    double circumference = 1;
    const double pi = 3.1416;

    // Input radius
    cout << "Enter Radius: ";
    cin >> radius;

    // Calculate circumference
    circumference = 2 * pi * radius;

    // Display result
    cout << "Circumference = " << circumference << endl;

    return 0;
}
