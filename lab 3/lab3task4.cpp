#include <iostream>   // For input and output
using namespace std;

int main() {
    int age;   // Declare an integer variable for age

    // Ask the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is greater than or equal to 18
    if (age >= 18) {
        cout << "You are 18 or older. You are eligible." << endl;
    }
    // If age is less than 18
    else {
        cout << "You are under 18. You are not eligible." << endl;
    }

    return 0;   // Program ends successfully
}
