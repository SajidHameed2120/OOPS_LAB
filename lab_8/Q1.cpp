#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollno;
    int n;
    string subjects[10];
    float marks[10];
    float cgpa;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.rollno;

    cout << "Enter number of subjects: ";
    cin >> s.n;

    cin.ignore();

    for (int i = 0; i < s.n; i++) {
        cout << "Enter subject " << i + 1 << " name: ";
        getline(cin, s.subjects[i]);

        cout << "Enter marks in " << s.subjects[i] << ": ";
        cin >> s.marks[i];
        cin.ignore();
    }

    cout << "Enter CGPA: ";
    cin >> s.cgpa;

    cout << "\n----- Student Information -----\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollno << endl;

    cout << "Subjects and Marks:\n";
    for (int i = 0; i < s.n; i++) {
        cout << s.subjects[i] << ": "
             << s.marks[i] << endl;
    }

    cout << "CGPA: " << s.cgpa << endl;

    return 0;
}