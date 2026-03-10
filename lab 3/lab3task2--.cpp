// C++ Program for First Equation of Motion
// Formula: v = u + a*t

#include <iostream>
using namespace std;

int main() {

    // a & b. Define and initialize variables together
    double initialVelocity = 0.0;
    double finalVelocity = 0.0;
    double acceleration = 0.0;
    double time = 0.0;

    // c. Take input from user
    cout << "Enter Initial Velocity (u): ";
    cin >> initialVelocity;

    cout << "Enter Acceleration (a): ";
    cin >> acceleration;

    cout << "Enter Time (t): ";
    cin >> time;

    // d. Calculate final velocity
    finalVelocity = initialVelocity + (acceleration * time);

    // e. Display results
    cout << "\n----- Results -----" << endl;
    cout << "Initial Velocity (u) = " << initialVelocity << " m/s" << endl;
    cout << "Acceleration (a) = " << acceleration << " m/s^2" << endl;
    cout << "Time (t) = " << time << " s" << endl;
    cout << "Final Velocity (v) = " << finalVelocity << " m/s" << endl;

    return 0;
}
