// Program for Star to Delta Conversion
#include <iostream>
using namespace std;

int main() {
    float r1=0, r2=0, r3=0;
    float d1, d2, d3;

    cout << "Enter Star Resistances (R1 R2 R3): ";
    cin >> r1 >> r2 >> r3;

    float sum = (r1*r2) + (r2*r3) + (r3*r1);

    d1 = sum / r1;
    d2 = sum / r2;
    d3 = sum / r3;

    cout << "Delta Resistances: " << d1 << " " << d2 << " " << d3 << endl;

    return 0;
}
