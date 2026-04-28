#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare and initialize a 3x3 array with random values
    int matrix[3][3] = {
        {2, 5, 7},
        {1, 4, 9},
        {3, 6, 8}
    };

    int totalSum = 0;  // To store total sum of all elements

    // Step 2: Calculate and display sum of each row
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;  // Reset for each row

        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];  // Add elements of row
        }

        cout << "Row " << i << " sum = " << rowSum << endl;
        totalSum += rowSum;  // Add to total sum
    }

    cout << endl;

    // Step 3: Calculate and display sum of each column
    cout << "Sum of each column:" << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;  // Reset for each column

        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];  // Add elements of column
        }

        cout << "Column " << j << " sum = " << colSum << endl;
    }

    cout << endl;

    // Step 4: Display total sum of all elements
    cout << "Total sum of all elements = " << totalSum << endl;

    return 0;  // End of program
}
