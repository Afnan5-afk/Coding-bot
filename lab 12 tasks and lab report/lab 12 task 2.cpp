#include <iostream>   // Library for input and output

using namespace std;

int main()
{
    // Declaring and initializing an integer array
    int numbers[5] = {10, 20, 30, 40, 50};

    // Declaring a pointer variable
    // and pointing it to the first element of the array
    int *ptr = numbers;

    // Displaying array elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++)
    {
        // Accessing elements using pointer arithmetic
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}
