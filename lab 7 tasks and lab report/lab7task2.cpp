#include <iostream>  // For input and output
using namespace std;

int main() {

    // Step 1: Declare and initialize a character array
    // This array stores a word (e.g., "HELLO")
    char message[] = "HELLO";

    // Step 2: Loop through each character until the null character '\0' is reached
    // '\0' marks the end of a character array (string)
    for (int i = 0; message[i] != '\0'; i++) {

        // Display each character on a separate line
        cout << message[i] << endl;
    }

    return 0;  // Program ends successfully
}
