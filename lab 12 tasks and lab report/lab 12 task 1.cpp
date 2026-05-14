#include <iostream>   // Library for input and output

using namespace std;

int main()
{
    // Declaring and initializing an integer variable
    int num = 25;

    // Declaring a pointer variable of integer type
    int *ptr;

    // Storing the address of num in ptr
    ptr = &num;

    // Displaying the value of num
    cout << "Value of num: " << num << endl;

    // Displaying the value pointed to by ptr using dereference operator
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
