#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare an array to store 5 integers
    int numbers[5];

    // Step 2: Take input from the user
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];  // Store each number in the array
    }

    // Step 3: Calculate the sum of array elements
    int sum = 0;  // Initialize sum to 0
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Add each element to sum
    }

    // Step 4: Display the sum
    cout << "The sum of the numbers is: " << sum << endl;

    return 0;  // End of program
}
