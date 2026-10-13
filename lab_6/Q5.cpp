
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;

public:
    void getStudentDetails() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudentDetails() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    void getTeacherDetails() {
        cout << "Enter subject: ";
        cin >> subject;
    }

    void displayTeacherDetails() {
        cout << "Subject: " << subject << endl;
    }
};

class TeachingAssistant : public Student, public Teacher {
public:
    void displayDetails() {
        displayPersonDetails();
        displayStudentDetails();
        displayTeacherDetails();
    }
};

int main() {
    TeachingAssistant ta;

    ta.getPersonDetails();
    ta.getStudentDetails();
    ta.getTeacherDetails();

    cout << "\nTeaching Assistant Details" << endl;
    ta.displayDetails();

    return 0;
}
