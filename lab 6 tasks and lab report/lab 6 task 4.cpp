#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)   // outer loop (rows)
    {
        for (int j = 1; j <= i; j++)   // inner loop (stars)
        {
            cout << "*";
        }
        cout << endl;   // move to next line
    }

    return 0;
}
