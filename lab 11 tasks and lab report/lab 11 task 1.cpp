#include <iostream>   // Library for input and output
#include <string>     // Library for using string

using namespace std;

int main()
{
    // Declaring and initializing a string variable
    string message = "Welcome to C++ Programming";

    // Using built-in function length() to find string length
    int length = message.length();

    // Displaying the string
    cout << "Message: " << message << endl;

    // Displaying the length of the string
    cout << "Length of the string is: " << length << endl;

    return 0;
}
