// C++ program to display numbers from 1 to 10 using do...while loop

#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout without writing std::

int main()
{
    int i = 1;   // Step 1: Initialize the variable starting from 1

    // Step 2: do block executes first before checking the condition
    do
    {
        cout << i << endl;   // Step 3: Display the current value of i
        i++;                 // Step 4: Increase the value of i by 1
    }
    while (i <= 10);   // Step 5: Loop continues while i is less than or equal to 10

    return 0;   // Program ends
}
