#include <iostream>//header file or input output library
using namespace std;// we write it to avoid writing std before every line

int main() {//every C++ program starts from here
    int a = 10;//int for numbers like 10,2,3 etc
    float b = 3.14f;// float is for decimal value
    double c = 9.876;//more precice
    char d = 'A';//char is mainly used for single characters
    bool e = true;//used for true and false

    cout << "Value of a (int): " << a << endl;//showing value of a on screen
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;//showing size of a on screen 
    cout << "Address of a: " << &a << endl << endl;// same here showing address of a

    cout << "Value of b (float): " << b << endl;//same thing we would do for the value float,size,and address
    cout << "Size of b: " << sizeof(b) << " bytes" << endl;
    cout << "Address of b: " << &b << endl << endl;

    cout << "Value of c (double): " << c << endl;//same for double
    cout << "Size of c: " << sizeof(c) << " bytes" << endl;
    cout << "Address of c: " << &c << endl << endl;

    cout << "Value of d (char): " << d << endl;
    cout << "Size of d: " << sizeof(d) << " bytes" << endl;
    cout << "Address of d: " << (void*)&d << endl << endl;

    cout << "Value of e (bool): " << e << endl;
    cout << "Size of e: " << sizeof(e) << " bytes" << endl;
    cout << "Address of e: " << &e << endl;

    return 0;//this tells the computer that program has succesfully ended
}
