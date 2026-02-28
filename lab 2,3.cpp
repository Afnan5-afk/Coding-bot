#include <iostream>//this is header file
using namespace std;//its purpose is not to write std before every line

int main() {//every main function of C++ starts from here
    float celsius, fahrenheit;//these are the two values that we are gonna deal with

    cout << "Enter temperature in Celsius: ";//it would show on screen that enter temperature in cenlsius
    cin >> celsius;//user would enter value

    fahrenheit = (celsius * 9.0 / 5.0) + 32.3;   // given formula

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;//here we will get the value of fahrenheit

    return 0;//here program ends 
}
