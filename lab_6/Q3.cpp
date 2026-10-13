
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Performance : public Student {
protected:
    float marks;

public:
    void getMarks() {
        cout << "Enter total marks (out of 100): ";
        cin >> marks;
    }

    void displayMarks() {
        cout << "Total Marks: " << marks << endl;
    }
};

class Graduation : public Performance {
public:
    void displayHonors() {
        displayStudentDetails();
        displayMarks();

        if (marks >= 90) {
            cout << "Graduation Honors: Distinction" << endl;
        } else if (marks >= 75) {
            cout << "Graduation Honors: First Class" << endl;
        } else if (marks >= 60) {
            cout << "Graduation Honors: Second Class" << endl;
        } else {
            cout << "Graduation Honors: Pass" << endl;
        }
    }
};

int main() {
    Graduation g;

    g.getStudentDetails();
    g.getMarks();

    cout << "\n--- Student Academic Report ---" << endl;
    g.displayHonors();

    return 0;
}
