// Program to calculate roots of quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    discriminant = (b*b) - (4*a*c);

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Roots are real and different." << endl;
        cout << "Root1: " << root1 << endl;
        cout << "Root2: " << root2 << endl;
    }
    else if(discriminant == 0) {
        root1 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root: " << root1 << endl;
    }
    else {
        cout << "Roots are imaginary." << endl;
    }

    return 0;
}
