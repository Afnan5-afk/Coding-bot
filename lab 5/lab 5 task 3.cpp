// C++ program to calculate the sum of numbers from 1 to a user-entered integer using while loop

#include <iostream>   // Library for input and output
using namespace std;  // Allows use of cout and cin without std::

int main()
{
    int num;      // Variable to store the number entered by the user
    int i = 1;    // Counter variable starting from 1
    int sum = 0;  // Variable to store the sum (initially 0)

    // Ask the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // while loop to add numbers from 1 up to the entered number
    while (i <= num)
    {
        sum = sum + i;   // Add the current value of i to sum
        i++;             // Increase i by 1 each iteration
    }

    // Display the final sum
    cout << "The sum of numbers from 1 to " << num << " is: " << sum << endl;

    return 0;   // End of program
}
