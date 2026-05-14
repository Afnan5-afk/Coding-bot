#include <iostream>   // Library for input and output

using namespace std;

// Function declaration
// This function takes an array and its size as parameters
// and returns the sum of all array elements
int calculateSum(int arr[], int size);

int main()
{
    // Declaring a one-dimensional array of size 10
    int numbers[10];

    int sum;
    double average;

    // Taking input from the user
    cout << "Enter 10 integer values:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calling the function to calculate sum
    sum = calculateSum(numbers, 10);

    // Calculating average
    average = sum / 10.0;

    // Displaying results
    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}

// Function definition
int calculateSum(int arr[], int size)
{
    int total = 0;

    // Loop to add all array elements
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }

    // Returning the final sum
    return total;
}
