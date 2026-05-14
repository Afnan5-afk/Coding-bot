#include <iostream>   // Library for input and output

using namespace std;

// Function declaration
// multiply() takes two integer parameters
void multiply(int num1, int num2);

int main()
{
    int a, b;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Calling the function and passing values
    multiply(a, b);

    return 0;
}

// Function definition
void multiply(int num1, int num2)
{
    // Calculating product
    int product = num1 * num2;

    // Displaying the result
    cout << "\nThe product of the two numbers is: " << product << endl;
}
