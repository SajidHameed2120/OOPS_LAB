//Demonstrate all constructors
#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    float marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        marks = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Student(int r, float m)
    {
        rollNo = r;
        marks = m;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        marks = s.marks;
        cout << "Copy constructor called." << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Default constructor
    Student s1;
    s1.display();

    cout << endl;

    // Parameterized constructor
    Student s2(101, 85.5);
    s2.display();

    cout << endl;

    // Copy constructor
    Student s3(s2);
    s3.display();

    return 0;
}