// Program to calculate area and perimeter of rectangle
#include <iostream>
using namespace std;

int main() {
    float length = 0, width = 0, area = 1, perimeter = 1;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
