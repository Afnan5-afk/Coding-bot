#include <iostream>   // Library for input and output

using namespace std;

// Function declaration
// getSquare() takes one integer parameter
// and returns an integer value
int getSquare(int number);

int main()
{
    int num, result;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> num;

    // Calling the function
    result = getSquare(num);

    // Displaying the returned result
    cout << "\nThe square of the number is: " << result << endl;

    return 0;
}

// Function definition
int getSquare(int number)
{
    // Calculating square
    int square = number * number;

    // Returning the result
    return square;
}
