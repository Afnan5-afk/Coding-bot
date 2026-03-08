#include <iostream>
using namespace std;

int main()
{
    // 1) Original while loop: i = 0, print "Usama Siraj" 5 times
    cout << "1) Original while loop i=0 to 5 (prints Usama Siraj 5 times):" << endl;
    int i = 0;
    while (i < 5)
    {
        cout << "Usama Siraj" << "\n";
        i++;
    }
    cout << endl;

    // 2) Change start from 0 to 1 ? prints 4 times
    cout << "2) Change start from 0 to 1 (i=1 to 5):" << endl;
    i = 1;
    while (i < 5)
    {
        cout << "Usama Siraj" << "\n";
        i++;
    }
    cout << endl;

    // 3) Change start to 2, end to 5 ? prints 3 times
    cout << "3) Change start i=2, end=5:" << endl;
    i = 2;
    while (i < 5)
    {
        cout << "Usama Siraj" << "\n";
        i++;
    }
    cout << endl;

    // 4) Change end to 100 (printing only first 5 for demo)
    cout << "4) Change end to 100 (printing first 5 for demonstration):" << endl;
    i = 0;
    int count = 0; // to limit demo output
    while (i < 100 && count < 5)
    {
        cout << "Usama Siraj" << "\n";
        i++;
        count++;
    }
    cout << endl;

    // 5) Print the loop variable i instead of "Usama Siraj"
    cout << "5) Print i instead of Usama Siraj (i=0 to 4):" << endl;
    i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    cout << endl;

    // 6) Print i+1 instead of i ? starts counting from 1
    cout << "6) Print i+1 instead of i (i=0 to 4):" << endl;
    i = 0;
    while (i < 5)
    {
        cout << i + 1 << "\n";
        i++;
    }
    cout << endl;

    return 0;
}
