#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare and initialize a 3x3 2D array
    // Values are filled row-wise
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Step 2: Use nested loops to display the array
    // Outer loop controls rows
    for (int i = 0; i < 3; i++) {

        // Inner loop controls columns
        for (int j = 0; j < 3; j++) {

            // Display each element
            cout << matrix[i][j] << " ";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;  // Program ends successfully
}
