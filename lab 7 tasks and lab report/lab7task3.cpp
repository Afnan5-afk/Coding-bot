#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare two arrays of size 5
    int source[5] = {1, 2, 3, 4, 5};  // Initialize source array
    int destination[5];               // Destination array (empty for now)

    // Step 2: Copy elements from source to destination using a loop
    for (int i = 0; i < 5; i++) {
        destination[i] = source[i];  // Copy each element
    }

    // Step 3: Display the source array
    cout << "Source Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    // Step 4: Display the destination array
    cout << "Destination Array (After Copy):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    cout << endl;

    return 0;  // Program ends successfully
}
