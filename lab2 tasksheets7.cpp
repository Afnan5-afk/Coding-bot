#include <iostream>
using namespace std;

int main()
{
    cout << "1) Original loop i=0 to 2 (prints Usama Siraj 2 times):" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Usama Siraj" << "\n";
    }
    cout << endl;

    cout << "2) Change start from 0 to 1 (i=1 to 2):" << endl;
    for (int i = 1; i < 2; i++)
    {
        cout << "Usama Siraj" << "\n";
    }
    cout << endl;

    cout << "3) Change end from 2 to 5 (i=0 to 5):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Usama Siraj" << "\n";
    }
    cout << endl;

    cout << "4) Change end from 2 to 100 (i=0 to 100) [printing first 5 for demonstration]:" << endl;
    for (int i = 0; i < 5; i++) // using 5 instead of 100 to keep output short
    {
        cout << "Usama Siraj" << "\n";
    }
    cout << endl;

    cout << "5) Print the loop variable i instead of Usama Siraj (i=0 to 4):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    cout << endl;

    cout << "6) Print i+1 instead of i (i=0 to 4):" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "\n";
    }

    return 0;
}
