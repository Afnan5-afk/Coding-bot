#include <iostream>   // Library used for input and output
using namespace std;  // Allows us to use cout and cin without writing std::

int main()
{
    char grade;   // Variable to store the grade entered by the user

    // Ask the user to enter a grade
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;   // Taking input from the user

    // Switch statement checks the value of grade
    switch(grade)
    {
        case 'A':
            cout << "Excellent" << endl;   // If grade is A
            break;   // Stops further case execution

        case 'B':
            cout << "Very Good" << endl;   // If grade is B
            break;

        case 'C':
            cout << "Good" << endl;   // If grade is C
            break;

        case 'D':
            cout << "Pass" << endl;   // If grade is D
            break;

        case 'F':
            cout << "Fail" << endl;   // If grade is F
            break;

        default:
            // If user enters any other character
            cout << "Invalid Grade" << endl;
    }

    return 0;   // Indicates that the program ended successfully
}
