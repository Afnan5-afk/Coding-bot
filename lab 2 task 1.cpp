#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 99.99;
    char d = 'A';
    bool e = true;

    cout << "Variable a (int)\n";
    cout << "Value: " << a << endl;
    cout << "Size: " << sizeof(a) << " bytes" << endl;
    cout << "Address: " << &a << endl << endl;

    cout << "Variable b (float)\n";
    cout << "Value: " << b << endl;
    cout << "Size: " << sizeof(b) << " bytes" << endl;
    cout << "Address: " << &b << endl << endl;

    cout << "Variable c (double)\n";
    cout << "Value: " << c << endl;
    cout << "Size: " << sizeof(c) << " bytes" << endl;
    cout << "Address: " << &c << endl << endl;

    cout << "Variable d (char)\n";
    cout << "Value: " << d << endl;
    cout << "Size: " << sizeof(d) << " bytes" << endl;
    cout << "Address: " << (void*)&d << endl << endl;

    cout << "Variable e (bool)\n";
    cout << "Value: " << e << endl;
    cout << "Size: " << sizeof(e) << " bytes" << endl;
    cout << "Address: " << &e << endl;

    return 0;
}
