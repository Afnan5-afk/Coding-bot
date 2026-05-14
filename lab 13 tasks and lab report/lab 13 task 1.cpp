#include <iostream>   // Library for input and output
#include <string>     // Library for using string

using namespace std;

// Declaring a structure named Person
struct Person
{
    string name;
    int age;
    string address;
};

int main()
{
    // Declaring a variable of type Person
    Person person1;

    // Initializing structure members
    person1.name = "Afnan Wazir";
    person1.age = 20;
    person1.address = "Karachi, Pakistan";

    // Displaying the values using dot notation
    cout << "Person Information:" << endl;

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}
