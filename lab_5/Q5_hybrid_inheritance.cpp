#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "Person information" << endl;
    }
};

class Teacher : virtual public Person {
public:
    void teach() {
        cout << "Teaching students..." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Studying courses..." << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void assist() {
        cout << "Teaching Assistant assisting in class..." << endl;
    }
};

int main() {
    TeachingAssistant ta;

    ta.showPerson();
    ta.teach();
    ta.study();
    ta.assist();

    return 0;
}