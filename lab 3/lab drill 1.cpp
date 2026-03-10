//name:Afnan
//dept:elect
//sec:B
//reg no:0659
// Program to calculate average of 5 subjects

#include <iostream>
using namespace std;

int main() {

    // Declare and initialize variables
    double s1=0, s2=0, s3=0, s4=0, s5=0, average=0;

    // Input marks
    cout << "Enter marks of 5 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    // Calculate average
    average = (s1 + s2 + s3 + s4 + s5) / 5;

    // Display average
    cout << "Average Marks = " << average << endl;

    return 0;
}


