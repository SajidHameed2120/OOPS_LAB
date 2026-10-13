#include <iostream>
using namespace std;

class Student {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Performance : public Student {
protected:
    float marks;

public:
    void setMarks(float m) {
        marks = m;
    }
};

class Graduation : public Performance {
public:
    void displayResult() {
        cout << "Student: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 85)
            cout << "Graduation Honor: Distinction" << endl;
        else if (marks >= 60)
            cout << "Graduation Honor: First Class" << endl;
        else
            cout << "Graduation Honor: Pass" << endl;
    }
};

int main() {
    Graduation g;

    g.setName("Sajid");
    g.setMarks(88);
    g.displayResult();

    return 0;
}