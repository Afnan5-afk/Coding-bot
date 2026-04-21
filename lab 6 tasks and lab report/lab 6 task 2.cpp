#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)   // rows
    {
        for (int j = 1; j <= 10; j++)   // columns
        {
            cout << i * j << "\t";   // print with tab spacing
        }
        cout << endl;   // move to next line after each row
    }

    return 0;
}
