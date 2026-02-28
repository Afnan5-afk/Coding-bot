#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";//shows on screen that enters an integer 
    cin >> number;//user has to enter a number

    if (number >= 0) //if is a condition , let us suppose a chosen number is greater than 0 so it will show on screen that you entered a positive number
    {
        cout << "You entered a positive integer: " << number << endl;
    }
    else//if not greater than 0 so it will show on screen that you enter a negative number  
    {
        cout << "You entered a negative integer: " << number << endl;//here it would show
    }

    return 0;//and here program ends 
}
