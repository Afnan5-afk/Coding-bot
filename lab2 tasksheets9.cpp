#include <iostream>
using namespace std;

// Function declaration: this function will add two integers
int addTwo(int x, int y);

int main()
{
    int a, b, sum; // variables to store input numbers and the result

    // Asking user for input
    cout << "Enter the first number: ";
    cin >> a; // take first number from user

    cout << "Enter the second number: ";
    cin >> b; // take second number from user

    // Calling the user-defined function 'addTwo' to compute sum
    sum = addTwo(a, b);

    // Displaying the result
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;

    return 0; // end of program
}

// Function definition: takes two integers and returns their sum
int addTwo(int x, int y)
{
    return (x + y);
}
