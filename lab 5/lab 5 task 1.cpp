// C++ program to display numbers from 1 to 10 using a while loop

#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout without std::

int main()
{
    int i = 1;   // Step 1: Initialize the variable starting from 1

    // Step 2: while loop will run as long as the condition is true
    while (i <= 10)
    {
        cout << i << endl;   // Step 3: Display the current value of i on a new line
        i++;                 // Step 4: Increase the value of i by 1 each time
    }

    return 0;  // Program ends
}
