#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout and cin without std::

int main()
{
    int day;   // Variable to store the day number entered by the user

    // Ask the user to enter a day number
    cout << "Enter a day number (1-7): ";
    cin >> day;   // Take input from the user

    // Switch statement to check the value of day
    switch(day)
    {
        case 1:
            cout << "Monday" << endl;  // If user enters 1
            break;   // Stops execution after this case

        case 2:
            cout << "Tuesday" << endl; // If user enters 2
            break;

        case 3:
            cout << "Wednesday" << endl; // If user enters 3
            break;

        case 4:
            cout << "Thursday" << endl; // If user enters 4
            break;

        case 5:
            cout << "Friday" << endl; // If user enters 5
            break;

        case 6:
            cout << "Saturday" << endl; // If user enters 6
            break;

        case 7:
            cout << "Sunday" << endl; // If user enters 7
            break;

        default:
            // Runs if the number is not between 1 and 7
            cout << "Invalid day number! Please enter a number between 1 and 7." << endl;
    }

    return 0;   // Program finished successfully
}
