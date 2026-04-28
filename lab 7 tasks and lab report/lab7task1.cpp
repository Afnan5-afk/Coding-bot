#include <iostream>  // Used for input and output
using namespace std;

int main() {

    // Step 1: Declare and initialize an integer array named "numbers"
    // The array has 5 elements: 10, 20, 30, 40, and 50
    int numbers[5] = {10, 20, 30, 40, 50};

    // Step 2: Use a loop to display each element of the array
    // The loop runs from index 0 to 4 (total 5 elements)
    for (int i = 0; i < 5; i++) {

        // Display the current index and its corresponding value
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    return 0;  // Indicates successful program execution
}
