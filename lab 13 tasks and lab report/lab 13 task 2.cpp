#include <iostream>   // Library for input and output
#include <string>     // Library for using string

using namespace std;

// Declaring a structure called Student
struct Student
{
    string name;
    int age;
    char grade;
};

int main()
{
    // Declaring and initializing a structure variable
    Student student1;

    student1.name = "Ali";
    student1.age = 19;
    student1.grade = 'A';

    // Displaying structure members
    cout << "Student Information:" << endl;

    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}
