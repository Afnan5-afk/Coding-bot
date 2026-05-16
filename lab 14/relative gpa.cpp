#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
    float gpa;
    char grade;
};

int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    float maxMarks = 0;

    // input data
    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << endl;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Roll No: ";
        cin >> s[i].roll;

        cout << "Marks: ";
        cin >> s[i].marks;

        if(s[i].marks > maxMarks) {
            maxMarks = s[i].marks;
        }
    }

    // calculate GPA and grade (relative system)
    for(int i = 0; i < n; i++) {

        float percent = (s[i].marks / maxMarks) * 100;

        if(percent >= 90) {
            s[i].grade = 'A';
            s[i].gpa = 4.0;
        }
        else if(percent >= 80) {
            s[i].grade = 'B';
            s[i].gpa = 3.0;
        }
        else if(percent >= 70) {
            s[i].grade = 'C';
            s[i].gpa = 2.0;
        }
        else if(percent >= 60) {
            s[i].grade = 'D';
            s[i].gpa = 1.0;
        }
        else {
            s[i].grade = 'F';
            s[i].gpa = 0.0;
        }
    }

    // output result
    cout << "\n\n----- RESULT -----\n";

    for(int i = 0; i < n; i++) {
        cout << "\nName: " << s[i].name;
        cout << "\nRoll No: " << s[i].roll;
        cout << "\nMarks: " << s[i].marks;
        cout << "\nGrade: " << s[i].grade;
        cout << "\nGPA: " << s[i].gpa << "\n";
    }

    cout << "\nDone!\n";

    return 0;
}
