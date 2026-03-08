#include <iostream>   // Library for input and output
using namespace std;  // Allows use of cout and cin without std::

int main()
{
    int choice;      // Variable to store user menu choice
    double value;    // Variable to store the input value

    // Display the conversion menu
    cout << "------ Unit Conversion Menu ------\n";
    cout << "1 -> Convert Kilometers to Meters\n";
    cout << "2 -> Convert Meters to Centimeters\n";
    cout << "3 -> Convert Kilograms to Grams\n";
    cout << "4 -> Convert Celsius to Fahrenheit\n";
    cout << "Enter your choice: ";
    
    cin >> choice;   // Taking user's menu choice

    // Switch statement checks which option the user selected
    switch(choice)
    {
        case 1:
            // Kilometer to meter conversion
            cout << "Enter value in Kilometers: ";
            cin >> value;
            cout << "Meters = " << value * 1000 << endl; // 1 km = 1000 m
            break;

        case 2:
            // Meter to centimeter conversion
            cout << "Enter value in Meters: ";
            cin >> value;
            cout << "Centimeters = " << value * 100 << endl; // 1 m = 100 cm
            break;

        case 3:
            // Kilogram to gram conversion
            cout << "Enter value in Kilograms: ";
            cin >> value;
            cout << "Grams = " << value * 1000 << endl; // 1 kg = 1000 g
            break;

        case 4:
            // Celsius to Fahrenheit conversion
            cout << "Enter temperature in Celsius: ";
            cin >> value;
            cout << "Fahrenheit = " << (value * 9/5) + 32 << endl; // Formula
            break;

        default:
            // If the user enters a number other than 1–4
            cout << "Invalid choice!" << endl;
    }

    return 0;  // Indicates program executed successfully
}
