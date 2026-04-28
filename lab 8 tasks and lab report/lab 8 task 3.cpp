#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare and initialize a 4x4 array with random values
    int matrix[4][4] = {
        {12, 7, 9, 15},
        {3, 25, 6, 10},
        {14, 8, 2, 18},
        {11, 5, 20, 4}
    };

    // Step 2: Assume the first element is the maximum
    int max = matrix[0][0];

    // Step 3: Use nested loops to find the maximum value
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            // If current element is greater than max, update max
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Step 4: Display the maximum value
    cout << "The maximum value in the array is: " << max << endl;

    return 0;  // End of program
}
